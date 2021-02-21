#include "menus/StartMenu.h"
#include "menus/StyleMenu.h"
#include "navigation/NavController.h"
#include <memory>
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
    if (option == 1) {
        shared_ptr<StyleMenu> styleMenu(new StyleMenu());
        NavController::getInstance().navigate(styleMenu);
    } else {
        NavController::getInstance().popBackStack();
    }
}