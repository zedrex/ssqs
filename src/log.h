#ifndef LOG_H
#define LOG_H

#include <iostream>
#include "server_status.h"

class Log
{
public:
    // Output line count
    static int line_number;

    // Adds a output line in the output.csv file
    static void CreateRecord(std::string event_type, double time, int customer_serial, ServerStatus server_status, int queue_size);
};

#endif