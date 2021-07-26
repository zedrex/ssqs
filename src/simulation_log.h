#ifndef SIMULATION_LOG_H
#define SIMULATION_LOG_H

#include <iostream>
#include <string>
#include <vector>
#include "event_record.h"
#include "customer_record.h"
#include "customer.h"
#include "server.h"

class SimulationLog
{
private:
    std::vector<EventRecord> event_records;
    std::vector<CustomerRecord> customer_records;

    double total_simulation_time;
    double total_customers;
    double total_queue_length;
    double total_queue_delay_time;
    double total_service_time;
    double total_inter_arrival_time;

    double average_inter_arrival_time;
    double average_queue_length;
    double average_queue_delay;
    double average_service_time;
    double server_utilization_percentage;

public:
    SimulationLog();

    // Create a record for a given event
    void CreateEventRecord(std::string event_type, double time, int customer_serial, ServerStatus server_status, int queue_size);

    // Create a record for a given customer
    void CreateCustomerRecord(Customer customer);

    void CreateSimulationSummary();

    void CreateStatisticalData();

    std::string GetEventRecords();

    std::string GetCustomerRecords();

    std::string GetSimulationStatistics();
};

#endif