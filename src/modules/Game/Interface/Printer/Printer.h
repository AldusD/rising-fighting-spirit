#pragma once

#include "./Messages/Messages.h"

#include <string>
#include <vector>

class Printer { // handle what user sees for what is requested by event
    private:
        Messages messages;
        void printOptions(const std::vector<std::string>& options);
        void printFreeField();
        void printSpecialMessage(const string& title);
    public:
        Printer();
        void printChoice(const string& title, const std::string& message, const std::vector<std::string>& options);
        void printInput(const string& title, const std::string& message);
        void printSingleMessage(string message); // keeps outputting exclusively to this module

};
