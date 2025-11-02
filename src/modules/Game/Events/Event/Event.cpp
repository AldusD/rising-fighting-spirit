#include "Event.h"

#include "../enums/EventTypeEnum.h"
#include <string>
#include <vector>

using namespace std;

Event::Event(string message, EventTypeEnum type, vector<string> options) 
    : message(message), type(type), options(options) {}

string Event::getMessage() {
    return message;
}

EventTypeEnum Event::getType() {
    return type;
}

vector<string> Event::getOptions() {
    return options;
}

void Event::setMessage(string message) {
    this->message = message;
}

void Event::setType(EventTypeEnum type) {
    this->type = type;
}

void Event::setOptions(vector<string> options) {
    this->options = options;
}
