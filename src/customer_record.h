#ifndef CUSTOMER_RECORD_H
#define CUSTOMER_RECORD_H

#include "customer.h"

class CustomerRecord
{

    // Arrival serial
    int serial;

    double arrival_time;
    double service_start_time;
    double departure_time;

    // Queue stay time
    double queue_delay_time;

    // Service time
    double service_time;

public:
    CustomerRecord();
    CustomerRecord(Customer customer);

    friend class SimulationLog;
};

#endif