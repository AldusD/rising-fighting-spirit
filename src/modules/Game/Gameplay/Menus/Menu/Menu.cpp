#include "Menu.h"

#include <vector>
#include <string>
#include <cctype>

using namespace std;

string Menu::getTitle() {
    return title;
};

string Menu::getMessage() {
    return message;
};

vector<string> Menu::getOptions() {
    return options;
};

vector<string> Menu::getActions() {
    return actions;
};

string Menu::getNextMenu(string optionSelected) {
    int index = stoi(optionSelected) - 1; // options start from 1 index from 0 -> -1
    return nextMenus[index];
};

string Menu::getAction(string optionSelected) {
    int index = stoi(optionSelected) - 1; // options start from 1 index from 0 -> -1
    return actions[index];
};