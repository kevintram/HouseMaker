#pragma once

#include "menus/Menu.h"

class StartMenu : public Menu {
    public: 
        StartMenu(bool isPopBackStackInclusive = false);
        void print();
        void choose(int option);
    private:
        vector<string> options;
};