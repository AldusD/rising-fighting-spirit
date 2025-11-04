#pragma once

#include <vector>
#include <string>

using namespace std;

class Menu { // handles selection state tells gameplay how to fill the event, which action to do and what menu its going next
    private:
        string title;
        string message;
        vector<string> options;
        vector<string> actions;
        vector<string> nextMenus; // other modules shouldnt see this
    public:
        // constructor
        Menu(string title, string message, vector<string> options, vector<string> actions, vector<string> nextMenus ) 
            : title(title), message(message), options(options), actions(actions), nextMenus(nextMenus) {};

        // getters (shouldnt have setters)
        string getTitle();
        string getMessage();
        vector<string> getOptions();
        vector<string> getActions();

        // behaviors
        string getNextMenu(string optionSelected);
        string getAction(string optionSelected);
};