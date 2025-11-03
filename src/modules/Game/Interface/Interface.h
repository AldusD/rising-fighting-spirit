#pragma once

#include <string>

#include "../Events/Events.h"

using namespace std;

// handles what user sees (printer*) and what he responds (inputHandler)
// * = printer is one way to implement, the module based architecture is made so that creating a window UI would not affect anything of the project
class Interface {
    private:
        string handleChoice(Event event);
        string handleInput(Event event);
    public:
        string handleEvent(Event event);
};
