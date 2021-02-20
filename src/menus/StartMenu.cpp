#include "StartMenu.h"
#include <iostream>

StartMenu::StartMenu(bool isPopBackStackInclusive) : Menu(isPopBackStackInclusive) {
    options = vector<string>();
    options.push_back("1. Create House");
    options.push_back("2. Exit");
}

void StartMenu::print() {
    for (string option : options) {
        cout << option << endl;
    }
}

void StartMenu::choose(int option) {
    
}