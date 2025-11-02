#include "EventResponse.h"

using namespace std;

EventResponse::EventResponse(string message) : message(message) {};

string EventResponse::getMessage() {
    return message;
}; 

void EventResponse::setMessage(string message) {
    this->message = message;
};
