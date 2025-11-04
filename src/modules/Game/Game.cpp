#include "Game.h"

#include "./Gameplay/Gameplay.h"
#include "../Database/Client/Client.h"

Game::Game(Database& db) : db_(db), dbClient_(db) {};

Client& Game::getDbClient() {
    return dbClient_;
};

void Game::run() {
    Gameplay gameplay = Gameplay(dbClient_);
    dbClient_.seed();
    gameplay.start();
};
