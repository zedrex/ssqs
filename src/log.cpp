#include "log.h"
#include "server_status.h"

// Initialize static line number variable
int Log::line_number = 0;

void Log::CreateRecord(std::string event_type, double time, int customer_serial, ServerStatus server_status, int queue_size)
{
    std::cout << ++line_number << "," << event_type << "," << time << "," << customer_serial << "," << (server_status == ServerStatus::BUSY ? "Busy" : "Idle") << "," << queue_size << std::endl;
}