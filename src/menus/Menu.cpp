#include "menus/Menu.h"

Menu::Menu(bool isPopBackStackInclusive) {
    this->isPopBackStackInclusive = isPopBackStackInclusive;
    navController = MenuNavController::getInstance();
}

bool Menu::getIsPopBackStackInclusive() const {
    return isPopBackStackInclusive;
}