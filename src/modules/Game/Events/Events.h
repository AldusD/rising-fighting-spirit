#pragma once

#include "./Event/Event.h"
#include "./EventResponse/EventResponse.h"

using namespace std;

class Events {
public:
    EventResponse triggerEvent(Event event);
};
