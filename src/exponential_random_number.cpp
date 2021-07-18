#include <random>
#include "exponential_random_number.h"

double ExponentialRandomNumber::GetRandomNumber(double mean)
{
    // double random_variable = rand() / RAND_MAX;
    // double exponential_random_number = -mean * log(random_variable);
    // return exponential_random_number;

    // Placeholder random number (mean to 10 with 1 decimal place) because above work doesn't work
    return (rand() % 100 + mean) / 10.0;
}
