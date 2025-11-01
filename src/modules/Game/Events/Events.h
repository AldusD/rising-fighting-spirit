#pragma once

#include "Event.h"
#include <iostream>

struct EventResponse {
    bool handled;
    std::string responseMessage;
};

class Events {
public:
    EventResponse handleEvent(const Event& event);
};
