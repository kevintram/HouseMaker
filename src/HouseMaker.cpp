#include <iostream>
#include "menus/Menu.h"
#include "navigation/MenuNavController.h"

using namespace std;

int main() {
    cout << "Hello world" << endl;
    MenuNavController* navController = MenuNavController::getInstance();
    MenuNavController* navController2 = MenuNavController::getInstance();
    cout << navController << endl;
    cout << navController2 << endl;
}