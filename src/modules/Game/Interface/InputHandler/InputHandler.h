#pragma once

#include <string>

using namespace std;

class InputHandler {
    private:
        bool verifyTextInput(string input);
        bool verifyChoiceInput(int input, int range);
        bool isNumber(string s);
    public:
        string handleChoiceInput(int range);
        string handleTextInput();
};