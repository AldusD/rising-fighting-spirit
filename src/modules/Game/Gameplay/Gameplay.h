#pragma once
#include "../Events/Events.h"


#include <string>

#include "../Events/Events.h"
#include "../Interface/Interface.h"
#include "../../Database/Client/Client.h"
#include"./Menus/Menus.h"

using namespace std;

class Gameplay { // manages all game rules and the state
private:
    Interface interface;
    Events events;
    Menus menus;
    Client& dbClient_;
    string handleAction(string actionType);
public:
    void start();    
    Gameplay(Client& dbClient) : 
        interface(), 
        events(interface), 
        menus(), 
        dbClient_(dbClient) {};  
};