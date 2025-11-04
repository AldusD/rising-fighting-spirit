#include "Menus.h"

#include "./Menu/Menu.h"

#include <string>

using namespace std;

// handles predefined menus rendering them by title

Menu Menus::getMenu(string menuTitle) {
    if (menuTitle == "start") {
        vector<string> options = { "New Game", "Load Game", "Update Game", "Exit -_-" };
        string message = "May your Spirit be pure, may your Will be strong\n";
        vector<string> actions = { "generate_spirit", "", "", "exit" };
        vector<string> nextMenus = { "update_user", "update_user", "update_user",  "update_user" }; // TODO change it to correct values
        return Menu(menuTitle, message, options, actions, nextMenus);
    }

    if (menuTitle == "update_user") {
        vector<string> options = { "Delete Game", "Update Game" };
        string message = "Which operation you want to do?\n";
        vector<string> actions = { "", "" }; // TODO change it to correct values
        vector<string> nextMenus = { "start", "start" }; // TODO change it to correct values
        return Menu(menuTitle, message, options, actions, nextMenus);
    }

    return Menu("error t", "error msg", vector<string>{"error"}, vector<string>{"start"}, vector<string>{"error"});
};