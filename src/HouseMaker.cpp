#include <iostream>
#include <vector>
#include <string>
#include "navigation/NavController.h"
#include "menus/StartMenu.h"

using namespace std;

int main() {
    vector<string> options;
    options.push_back("HELLO");
    options.push_back("BOOOOP");
    options.push_back("COCOOO");
    
    StartMenu startMenu;
    startMenu.print();
}