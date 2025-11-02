#include "Printer.h"
#include "./Messages/Messages.h"

#include <string>
#include <vector>

#include <iostream>

using namespace std;


void Printer::print(const string& messageTitle, const vector<string>& options, bool isFreeField) {
    string message = messageTitle;
    cout << message << "\n\n";
    if (!options.empty()) {
        printOptions(options);
    }
    if (isFreeField) {
        printFreeField();
    }
}

void Printer::printOptions(const vector<string>& options) {
    string message = "Press: \n";
    for (size_t i = 0; i < options.size(); ++i) {
        message += "(" + to_string(i + 1) + ")" + " for ";
        message += options[i];
        message += "\n";
    }
    cout << message;
}

void Printer::printFreeField() {
    cout << "Write your answer";
}