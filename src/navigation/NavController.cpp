#include "navigation/NavController.h"

NavController::NavController() {
    menuBackStack = stack<Menu*>();
}

void NavController::navigate(Menu& menu) {
    menuBackStack.push(&menu);
}

Menu& NavController::getCurrentMenu() {
    return *menuBackStack.top();
}

void NavController::popBackStack() {
    menuBackStack.pop();
}

bool NavController::backStackIsEmpty() {
    return menuBackStack.empty();
}