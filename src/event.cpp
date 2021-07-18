#include "event.h"

Event::Event(EventType type, double invoke_time)
{
    this->type = type;
    this->invoke_time = invoke_time;
}

double Event::GetInvokeTime()
{
    return this->invoke_time;
}

EventType Event::GetType()
{
    return this->type;
}

bool Compare::operator()(Event a, Event b)
{
    if (a.GetInvokeTime() > b.GetInvokeTime())
    {
        return true;
    }
    else
    {
        return false;
    }
}