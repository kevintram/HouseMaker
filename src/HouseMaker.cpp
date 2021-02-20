#include <iostream>
#include <vector>
#include <string>
#include "navigation/NavController.h"
#include "menus/StartMenu.h"

using namespace std;

int main() {
    NavController navController;
    StartMenu startMenu = StartMenu();
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