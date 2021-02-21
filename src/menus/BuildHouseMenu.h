#pragma once

#include "menus/Menu.h"

class BuildHouseMenu : public Menu {
    public:
        BuildHouseMenu(bool isPopBackStackInclusive = false);
        void print();
        void choose(int option);
    private:
        vector<string> options;
};