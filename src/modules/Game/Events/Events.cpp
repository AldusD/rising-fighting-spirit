#include "Events.h"
#include "./enums/EventTypeEnum.h"
#include "./EventResponse/EventResponse.h"
#include "../Interface/Interface.h"

#include <string>

using namespace std;

EventResponse Events::triggerEvent(Event event) {
    Interface interface;
    string response = interface.handleEvent(event);
    EventResponse res = EventResponse(response);
        
    return res;
};
