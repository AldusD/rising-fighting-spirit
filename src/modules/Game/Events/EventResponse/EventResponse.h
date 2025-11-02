#pragma once

#include <string>

using namespace std;

// probably this class will only wrapper the string message, 
// but i dont want to create it only after realize events needs to return more info
class EventResponse { 
    private:
        string message;
    public:
        EventResponse(string message);
        string getMessage();
        void setMessage(string message);
};
