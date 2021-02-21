#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "navigation/NavController.h"
#include "menus/StartMenu.h"

using namespace std;

int main() {
    NavController& navController = NavController::getInstance();
    shared_ptr<StartMenu> startMenu(new StartMenu);
    navController.navigate(startMenu);

    while (!navController.backStackIsEmpty()) {
        Menu& menu = navController.getCurrentMenu();
        menu.print();

        int response;
        cin >> response;
        menu.choose(response);

        cout << endl;
    }

    return 0;
}