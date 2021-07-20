#include <queue>
#include <limits>

#include "simulation.h"
#include "log.h"
#include "event.h"
#include "customer.h"
#include "server_status.h"
#include "exponential_random_number.h"

Simulation::Simulation(double inter_arrival_time_mean, double service_time_mean, int number_of_customers)
{
    this->inter_arrival_time_mean = inter_arrival_time_mean;
    this->service_time_mean = service_time_mean;
    this->number_of_customers = number_of_customers;

    // Set up the random number generators
    this->inter_arrival_time_generator.SetMean(this->inter_arrival_time_mean);
    this->service_time_generator.SetMean(this->service_time_mean);
}

void Simulation::UpdateTime(double time) { this->clock = time; }

void Simulation::Initialize()
{
    // Set clock time to 0 and server status to Idle
    this->clock = 0;
    this->server_status = ServerStatus::IDLE;

    // Schedule the first arrival event
    Event arrival_event(EventType::ARRIVAL, this->clock + this->inter_arrival_time_generator.GetRandomNumber());
    this->event_queue.push(arrival_event);
}

void Simulation::Run()
{
    // Run simulation till event queue is empty
    while (!event_queue.empty())
    {
        // Fetch current event from the queue and update simulation clock
        Event current_event = this->event_queue.top();
        this->event_queue.pop();
        UpdateTime(current_event.GetInvokeTime());

        // Handle the event
        if (current_event.GetType() == EventType::ARRIVAL)
            HandleArrival();
        else if (current_event.GetType() == EventType::DEPARTURE)
            HandleDeparture();
    }
}

void Simulation::HandleArrival()
{
    // Create a new Customer
    Customer customer(this->clock);

    // Schedule next arrival event if customer limit is not crossed
    if (this->number_of_customers > Customer::GetTotalCustomers())
    {
        Event arrival_event(EventType::ARRIVAL, this->clock + this->inter_arrival_time_generator.GetRandomNumber());
        this->event_queue.push(arrival_event);
    }

    // If server is Busy, send customer to queue
    if (this->server_status == ServerStatus::BUSY)
    {
        // Send customer to the queue
        this->service_queue.push(customer);

        // Log the arrival event
        Log::CreateRecord("Arrival", this->clock, customer.GetSerial(), this->server_status, this->service_queue.size());
    }
    // If server is idle, get into service immediately
    else if (this->server_status == ServerStatus::IDLE)
    {
        // Log the arrival event
        Log::CreateRecord("Arrival", this->clock, customer.GetSerial(), this->server_status, this->service_queue.size());

        // Send the customer to server
        this->currently_served_customer = customer;

        // Set server status to Busy
        this->server_status = ServerStatus::BUSY;

        // Schedule the departure event (end of service)
        Event departure_event(EventType::DEPARTURE, this->clock + this->service_time_generator.GetRandomNumber());
        this->event_queue.push(departure_event);

        // Log the service event
        Log::CreateRecord("Service", this->clock, currently_served_customer.GetSerial(), this->server_status, this->service_queue.size());
    }
}

void Simulation::HandleDeparture()
{
    // Set server status to Idle
    this->server_status = ServerStatus::IDLE;

    // Log the departure event and empty the server
    Log::CreateRecord("Departure", this->clock, currently_served_customer.GetSerial(), this->server_status, this->service_queue.size());

    // If there are customers in queue, decrease queue length and schedule service time
    if (!(this->service_queue.empty()))
    {
        // Fetch first customer from the queue and send him to server
        Customer customer = service_queue.front();
        this->currently_served_customer = customer;

        this->service_queue.pop();

        // Set server to busy state
        this->server_status = ServerStatus::BUSY;

        // Schedule the departure event (end of service)
        Event departure_event(EventType::DEPARTURE, this->clock + this->service_time_generator.GetRandomNumber());
        this->event_queue.push(departure_event);

        // Log the service event
        Log::CreateRecord("Service", this->clock, currently_served_customer.GetSerial(), this->server_status, this->service_queue.size());
    }
}
