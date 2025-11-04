#include "modules/Game/Game.h"
#include "modules/Database/Database.h"

int main () { // starts project with an instance of game
    std::string connStr = "dbname=mydb user=postgres password=postgres host=db port=5432";
    Database db(connStr);

    Game game(db);
    game.run();
    return 0;
}
