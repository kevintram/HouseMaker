#include "menus/Menu.h"
#include <iostream>
using namespace std;

Menu::Menu(bool isPopBackStackInclusive) {
    this->isPopBackStackInclusive = isPopBackStackInclusive;
}

bool Menu::getIsPopBackStackInclusive() const {
    return isPopBackStackInclusive;
}