#include "Interface.h"

#include "./Printer/Printer.h"
#include "./InputHandler/InputHandler.h"
#include "../shared/MessagesEnum/MessagesEnum.h"

using namespace std;

string Interface::handleEvent(Event event) {
    Printer printer;
    InputHandler inputHandler;
    string response;

    if (event.getType() == EventTypeEnum::CHOICE) {
        int range = (int) event.getOptions().size();
        printer.printChoice(event.getTitle(), event.getMessage(), event.getOptions());
        string choice = inputHandler.handleChoiceInput(range);
        while(choice == "error") {
            printer.printSingleMessage(MessagesEnum::INVALID_CHOICE);
            string choice = inputHandler.handleChoiceInput(range);
        }
        return choice;
    }
    
    if (event.getType() == EventTypeEnum::INPUT) {
        printer.printInput(event.getTitle(), event.getMessage());
        return inputHandler.handleTextInput();
    }
    
    return "error"; // just so it compile
};