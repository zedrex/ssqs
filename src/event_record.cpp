#include "event_record.h"

EventRecord::EventRecord() {}

EventRecord::EventRecord(std::string event_type, double current_simulation_time, int customer_serial, ServerStatus current_server_status, int current_queue_size)
{
    this->event_type = event_type;
    this->current_simulation_time = current_simulation_time;
    this->customer_serial = customer_serial;
    this->current_server_status = current_server_status;
    this->current_queue_size = current_queue_size;
}