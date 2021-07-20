#ifndef SIMULATION_H
#define SIMULATION_H

#include <queue>
#include <vector>

#include "event.h"
#include "customer.h"
#include "server_status.h"
#include "exponential_random_number.h"

class Simulation
{
    // Simulation clock time (updates based on event invokes)
    double clock;

    // Server status (IDLE | BUSY)
    ServerStatus server_status;

    // Reference to the currently served customer
    Customer currently_served_customer;

    // Customer queue waiting for service
    std::queue<Customer> service_queue;

    // Minimum heap that keeps the Events sorted on their invoke time
    std::priority_queue<Event, std::vector<Event>, Compare> event_queue;

    //Average of  inter-arrival time of customers
    double inter_arrival_time_mean;

    // Average service time per customer
    double service_time_mean;

    // Exponential RNG for inter-arrival time
    ExponentialRandomNumber inter_arrival_time_generator;

    // Exponential RNG for service time
    ExponentialRandomNumber service_time_generator;

    // Total customers for current simulation (terminates when reaches the limit)
    int number_of_customers;

public:
    // Creates a simulation object with mean and customer limit
    Simulation(double inter_arrival_time_mean, double service_time_mean, int number_of_customers);

    // Initializes the state variables of the Simulation object and invokes the first event
    void Initialize();

    // Updates Simulation clock to given time
    void UpdateTime(double time);

    // Starts the simulation
    void Run();

    // Handles the arrival of a new customer to the system
    void HandleArrival();

    // Handles the departure of a customer from the system
    void HandleDeparture();
};

#endif