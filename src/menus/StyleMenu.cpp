#include "menus/StyleMenu.h"
#include "menus/BuildHouseMenu.h"
#include "navigation/NavController.h"
#include "furniturefactories/FurnitureFactory.h"
#include "furniturefactories/ArtDecoFurnitureFactory.h"
#include "furniturefactories/ModernFurnitureFactory.h"
#include "memory"
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
    shared_ptr<FurnitureFactory> furnitureFactory;

    if (option == 1) {
        furnitureFactory = make_shared<ModernFurnitureFactory>();
    } else if (option == 2) {
        furnitureFactory = make_shared<ArtDecoFurnitureFactory>();
    }

    shared_ptr<BuildHouseMenu> buildHouseMenu(new BuildHouseMenu(furnitureFactory));
    NavController::getInstance().navigate(buildHouseMenu);
}