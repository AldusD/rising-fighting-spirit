#pragma once

#include "EventTypeEnum.h"
#include <string>
#include <vector>

class Event {
public: 
    std::string message;
    EventTypeEnum type; 
    std::vector<std::string> options;
    
    Event(std::string message, EventTypeEnum type);
};
