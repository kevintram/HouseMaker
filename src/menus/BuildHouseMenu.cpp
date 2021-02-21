#include "menus/BuildHouseMenu.h"
#include <iostream>

BuildHouseMenu::BuildHouseMenu(bool isPopBackStackInclusive) : Menu(isPopBackStackInclusive) {
    options = vector<string>();
    options.push_back("1. Add Amenity");
    options.push_back("2. Edit Amenity");
    options.push_back("3. Finish House");
}

void BuildHouseMenu::print() {
    cout << "Whaddya wanna do?" << endl;
    for (string option : options) {
        cout << option << endl;
    }
}

void BuildHouseMenu::choose(int option) {

}
