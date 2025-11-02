#include "Messages.h"

#include <string>

using namespace std;

string Messages::getMessage(string title) {
    if (title == "start") {
        return Messages::LOGO;
    }

    return title;
};