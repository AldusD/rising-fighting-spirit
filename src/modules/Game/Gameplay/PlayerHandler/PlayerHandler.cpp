#include "PlayerHandler.h"
#include "../../Events/Events.h"

#include <string>

using namespace std;

void PlayerHandler::createPlayer() {
    Event event = Event("create_user", "Tell me warrior, what is your name", EventTypeEnum::INPUT, {});
    string nameInput = events.triggerEvent(event).getMessage();
    
    // handling wrong names
    bool firstTry = true;
    while (nameInput == "error" || firstTry) {
        firstTry = false;

        // not compliant username
        while (nameInput == "error") {
            Event retryEvent = Event("create_user", "Dont lie to me boy!", EventTypeEnum::INPUT, {});
            nameInput = events.triggerEvent(retryEvent).getMessage();
        }

        // conflict username
        Player player = dbClient_.findPlayer(nameInput);
        if (player.name != "") {
            nameInput = "error";
        }
    }

    // creating user
    dbClient_.insertPlayer(nameInput);
};

void PlayerHandler::updatePlayer() {

};
void PlayerHandler::deletePlayer() {

};
