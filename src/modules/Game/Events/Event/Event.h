#pragma once

#include "../enums/EventTypeEnum.h"
#include <string>
#include <vector>

using namespace std;

class Event {
    private:
        string message;
        EventTypeEnum type; 
        vector<string> options;
    public: 
    
    // constructor
    Event(string message, EventTypeEnum type, vector<string> options);

    // getters & setters
    string getMessage();
    EventTypeEnum getType();
    vector<string> getOptions();
    
    void setMessage(string message);
    void setType(EventTypeEnum type);
    void setOptions(vector<string> options);
};
