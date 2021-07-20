#include <iostream>
#include <ctime>
#include "simulation.h"
#include "exponential_random_number.h"

int main()
{
    // Input and output file initialization
    freopen("input.in", "r", stdin);
    freopen("output.csv", "w", stdout);

    // Add the label line in output.csv
    std::cout << "No.,Event Type,Current Time,Customer Serial,Server Status,Queue Size" << std::endl;

    // Simulation parameters
    int number_of_customers;
    double inter_arrival_time_mean, service_time_mean;
    std::cin >> inter_arrival_time_mean >> service_time_mean >> number_of_customers;

    // Create and run the simulation
    Simulation simulation(inter_arrival_time_mean, service_time_mean, number_of_customers);
    simulation.Initialize();
    simulation.Run();

    return 0;
}