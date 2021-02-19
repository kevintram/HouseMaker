#include "navigation/MenuNavController.h"

void MenuNavController::popBackStack() {
    menuBackStack.pop();
}

void MenuNavController::navigate(Menu menu) {
    menuBackStack.push(menu);
}

Menu& MenuNavController::getCurrentMenu() const {
    return menuBackStack.top();
}

MenuNavController::MenuNavController() {
    menuBackStack = stack<Menu&>();
}

MenuNavController* MenuNavController::instance = nullptr;

MenuNavController* MenuNavController::getInstance() {
    if (instance == nullptr) {
        instance = new MenuNavController();
    }

    return instance;
}