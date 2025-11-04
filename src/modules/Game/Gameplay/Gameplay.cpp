#include <string>
#include <vector>

#include "Gameplay.h"
#include "../Events/Events.h"
#include "SpiritGenerator/SpiritGenerator.h"

using namespace std;

void Gameplay::start () {
    Events events;

    //starting event turned into comment for testing purposes

    //vector<string> options = { "New game", "Load game", "Exit -_-" };
    //Event startGameEvent = Event("start", "May your Spirit be pure, may your Will be strong", EventTypeEnum::CHOICE, options);
    //events.triggerEvent(startGameEvent);

    SpiritGenerator spiritgenerator;
    spiritgenerator.statSelection(events);

}
