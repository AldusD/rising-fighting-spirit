#pragma once

#include "../enums/EventTypeEnum.h"
#include <string>
#include <vector>

using namespace std;

class Event { // represents the event that the gameplay can trigger
    private:
        string title;
        string message;
        EventTypeEnum type; 
        vector<string> options;
    public: 
    
    // constructor
    Event(string title, string message, EventTypeEnum type, vector<string> options);

    // getters & setters
    string getTitle();
    string getMessage();
    EventTypeEnum getType();
    vector<string> getOptions();
    
    void setTitle(string title);
    void setMessage(string message);
    void setType(EventTypeEnum type);
    void setOptions(vector<string> options);
};
