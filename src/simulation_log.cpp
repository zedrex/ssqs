#include <string>
#include "simulation_log.h"
#include "event_record.h"
#include "customer.h"
#include "customer_record.h"
#include "server.h"
#include <iostream>

SimulationLog::SimulationLog()
{
    this->total_simulation_time = 0;
    this->total_customers = 0;
    this->total_queue_length = 0;
    this->total_queue_delay_time = 0;
    this->total_service_time = 0;
    this->total_inter_arrival_time = 0;

    this->average_inter_arrival_time = 0;
    this->average_queue_length = 0;
    this->average_queue_delay = 0;
    this->average_service_time = 0;
    this->server_utilization_percentage = 0;
}

void SimulationLog::CreateEventRecord(std::string event_type, double time, int customer_serial, ServerStatus server_status, int queue_size)
{
    EventRecord current_event = EventRecord(event_type, time, customer_serial, server_status, queue_size);
    this->event_records.push_back(current_event);
}

void SimulationLog::CreateCustomerRecord(Customer customer)
{
    CustomerRecord current_customer = CustomerRecord(customer);
    this->customer_records.push_back(current_customer);
}

void SimulationLog::CreateSimulationSummary()
{
    this->total_customers = this->customer_records.size();

    this->total_simulation_time = this->customer_records.back().departure_time;

    for (int i = 0; i < this->total_customers; i++)
    {
        if (i == 0)
        {
            this->total_inter_arrival_time += this->customer_records[i].arrival_time;
        }
        else
        {
            this->total_inter_arrival_time += this->customer_records[i].arrival_time - this->customer_records[i - 1].arrival_time;
        }

        this->total_queue_delay_time += this->customer_records[i].queue_delay_time;
        this->total_service_time += this->customer_records[i].service_time;
    }

    for (int i = 1; i < this->total_customers * 3; i++)
    {
        double inter_event_time = this->event_records[i].current_simulation_time - this->event_records[i - 1].current_simulation_time;

        double last_event_queue_length = this->event_records[i - 1].current_queue_size;

        this->total_queue_length += last_event_queue_length * inter_event_time;
    }
}

void SimulationLog::CreateStatisticalData()
{

    this->average_inter_arrival_time = this->total_inter_arrival_time / this->total_customers;

    this->average_queue_length = this->total_queue_length / this->total_simulation_time;

    this->average_queue_delay = this->total_queue_delay_time / this->total_customers;
    this->average_service_time = this->total_service_time / this->total_customers;

    this->server_utilization_percentage = (this->total_service_time / this->total_simulation_time) * 100.0;
}

std::string SimulationLog::GetEventRecords()
{
    std::string event_record_csv = "Type,Start Time,Customer,Server Status,Queue Size\n";
    for (EventRecord event_record : this->event_records)
    {
        event_record_csv += event_record.event_type + "," + std::to_string(event_record.current_simulation_time) + "," + std::to_string(event_record.customer_serial) + "," + (event_record.current_server_status == ServerStatus::BUSY ? "Busy" : "Idle") + "," + std::to_string(event_record.current_queue_size) + "\n";
    }
    return event_record_csv;
}

std::string SimulationLog::GetCustomerRecords()
{
    std::string customer_record_csv = "Serial,Arrival Time,Queue Time,Service Start Time,Service Duration,Departure Time\n";
    for (CustomerRecord customer_record : this->customer_records)
    {
        customer_record_csv += std::to_string(customer_record.serial) + "," + std::to_string(customer_record.arrival_time) + "," + std::to_string(customer_record.queue_delay_time) + "," + std::to_string(customer_record.service_start_time) + "," + std::to_string(customer_record.service_time) + "," + std::to_string(customer_record.departure_time) + "\n";
    }
    return customer_record_csv;
}

std::string SimulationLog::GetSimulationStatistics()
{
    std::string simulation_statistics_csv = "Total Customers,Total Simulation Time,Average Inter Arrival Time,Average Service Time,Average Queue Delay,Average Queue Length,Server Utilization\n";

    simulation_statistics_csv += std::to_string(this->total_customers) + "," + std::to_string(this->total_simulation_time) + "," + std::to_string(this->average_inter_arrival_time) + "," + std::to_string(this->average_service_time) + "," + std::to_string(this->average_queue_delay) + "," + std::to_string(this->average_queue_length) + "," + std::to_string(this->server_utilization_percentage) + "%" + "\n";

    return simulation_statistics_csv;
}