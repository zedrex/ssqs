#ifndef EVENT_TYPE_H
#define EVENT_TYPE_H

enum class EventType
{
    ARRIVAL,
    DEPARTURE
};

class Event
{
private:
    // Enumerator class for Event Types (ARRIVAL | DEPARTURE)
    EventType type;

    // Time of happening for this event
    double invoke_time;

public:
    // Event constructor from event type and invoke time
    Event(EventType type, double invoke_time);

    // Returns event invoke time
    double GetInvokeTime();

    // Returns event type as enum class EventType
    EventType GetType();
};

// Sorts Event objects based on invoke time (ascending)
class Compare
{
public:
    bool operator()(Event a, Event b);
};

#endif