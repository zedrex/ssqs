#include "customer.h"
#include <iostream>

int Customer::total_customer = 0;

Customer::Customer() {}

Customer::Customer(double arrival_time)
{
    this->arrival_time = arrival_time;
    this->serial = ++(this->total_customer);
}

int Customer::GetSerial()
{
    return this->serial;
}

int Customer::GetTotalCustomers()
{
    return Customer::total_customer;
}