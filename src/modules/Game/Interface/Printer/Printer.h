#pragma once

#include <string>
#include <vector>

class Printer {
public:
    // Print a message and optionally print options or a free-field prompt.
    void print(const std::string& message, const std::vector<std::string>& options, bool isFreeField);
    void printOptions(const std::vector<std::string>& options);
    void printFreeField();
};
