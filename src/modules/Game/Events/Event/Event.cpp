#include "Event.h"

#include "../enums/EventTypeEnum.h"
#include <string>
#include <vector>

using namespace std;

Event::Event(string title, string message, EventTypeEnum type, vector<string> options) 
    : title(title), message(message), type(type), options(options) {}

string Event::getTitle() {
    return title;
}

string Event::getMessage() {
    return message;
}

EventTypeEnum Event::getType() {
    return type;
}

vector<string> Event::getOptions() {
    return options;
}

void Event::setTitle(string title) {
    this->title = title;
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
