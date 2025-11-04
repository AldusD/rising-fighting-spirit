#include "InputHandler.h"

#include "../../shared/RulesEnum.h"

#include <string>
#include <iostream>
#include <cctype>
#include <limits>

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
    string input;
    cin >> input;
    
    bool correctType = isNumber(input);
    if (!correctType) return "error";
    bool isValid = verifyChoiceInput(stoi(input), range);
    return isValid ? input : "error"; 
};

bool InputHandler::isNumber(string s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

string InputHandler::handleTextInput() {
    string input;
    cin >> input;
    
    bool isValid = verifyTextInput(input);
    return isValid ? input : "error";
};