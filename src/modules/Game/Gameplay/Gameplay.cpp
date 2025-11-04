#include <string>
#include <vector>

#include "Gameplay.h"
#include "../Events/Events.h"

using namespace std;

void Gameplay::start () {
    Events events;
    vector<string> options = { "New game", "Load game", "Exit -_-" };
    Event startGameEvent = Event("start", "May your Spirit be pure, may you Will be strong\n", EventTypeEnum::CHOICE, options);
    events.triggerEvent(startGameEvent);
}