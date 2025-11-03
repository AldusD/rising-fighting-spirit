#pragma once

#include "./Event/Event.h"
#include "./EventResponse/EventResponse.h"

using namespace std;

class Events { // bridge connecting business logic (gameplay mod) and user interaction (interface mod)
public:
    EventResponse triggerEvent(Event event);
};
