#include "InputHandler.h"

#include "../../shared/RulesEnum.h"

#include <string>
#include <iostream>

using namespace std;

bool InputHandler::verifyTextInput(string input) {
    return (
        input.length() > (size_t) RulesEnum::MIN_INPUT_LENGTH &&
        input.length() < (size_t) RulesEnum::MAX_INPUT_LENGTH
    );
};

bool InputHandler::verifyChoiceInput(int input, int range) {
    return (
        input < range &&
        input > 0
    );
};

string InputHandler::handleChoiceInput(int range) {
    int input;
    cin >> input;
    bool isValid = verifyChoiceInput(input, range);
    return isValid ? to_string(input) : "error"; 

};

string InputHandler::handleTextInput() {
    string input;
    cin >> input;
    bool isValid = verifyTextInput(input);
    return isValid ? input : "error";
};