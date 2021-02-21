#pragma once

#include "menus/Menu.h"
#include "furniturefactories/FurnitureFactory.h"

class BuildHouseMenu : public Menu {
    public:
        BuildHouseMenu(FurnitureFactory* furnitureFactory, bool isPopBackStackInclusive = false);
        void print();
        void choose(int option);
    private:
        vector<string> options;
        FurnitureFactory* furnitureFactory;
};