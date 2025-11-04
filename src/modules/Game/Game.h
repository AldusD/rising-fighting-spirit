#pragma once

#include "../Database/Client/Client.h"
#include "../Database/Database.h"

class Game { // wrapper of the game (its rules and state (gameplay) and how it works (events etc))
    public:
        Game(Database& db);
        Client& getDbClient();
        void run();
    private:
        Database& db_;
        Client dbClient_;
};