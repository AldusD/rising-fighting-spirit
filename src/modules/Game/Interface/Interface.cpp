#include "Interface.h"

#include "./Printer/Printer.h"

using namespace std;

string Interface::handleEvent(Event event) {
    Printer printer;
    printer.print(event.getMessage(), event.getOptions(), false);
    return "";
};
