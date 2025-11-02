#pragma once

#include <string>

#include "../Events/Events.h"

using namespace std;

class Interface {
public:
    string handleEvent(Event event);
};
