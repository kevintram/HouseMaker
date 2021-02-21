#include "menus/StyleMenu.h"
#include <iostream>

StyleMenu::StyleMenu(bool isPopBackStackInclusive) : Menu(isPopBackStackInclusive) {
    options = vector<string>();
    options.push_back("1. Modern");
    options.push_back("2. Art Deco");
}

void StyleMenu::print() {
    cout << "Choose a style: " << endl;
    for (string option : options) {
        cout << option << endl;
    }
}

void StyleMenu::choose(int option) {
    
}