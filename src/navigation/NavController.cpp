#include "navigation/NavController.h"
#include <utility>

NavController& NavController::getInstance() {
    static NavController instance; // guaranteed to be destroyed and instantiated on first use

    return instance;
}

NavController::NavController() {
    menuBackStack = stack<shared_ptr<Menu>>();
}

void NavController::navigate(const shared_ptr<Menu>& menu) {
    menuBackStack.push(move(menu));
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