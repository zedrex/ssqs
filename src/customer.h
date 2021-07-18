#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
    // Customer's arrival to the system according to simulation clock
    double arrival_time;

    // Customer serial based on arrival time
    int serial;

    // Keeps track of the total number of customers for the simulation
    static int total_customer;

public:
    // Empty Constructor (to fix bugs)
    Customer();

    // Creates Customer object from arrival to system
    Customer(double arrival_time);

    // Returns the arrival serial of the customer
    int GetSerial();

    // Returns the total number of customer so far (whole simulation)
    static int GetTotalCustomers();
};

#endif