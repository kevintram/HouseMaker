#pragma once

#include "menus/Menu.h"
#include "furniturefactories/FurnitureFactory.h"
#include <memory>

class BuildHouseMenu : public Menu {
    public:
        BuildHouseMenu(shared_ptr<FurnitureFactory> furnitureFactory, bool isPopBackStackInclusive = false);
        void print();
        void choose(int option);
    private:
        vector<string> options;
        shared_ptr<FurnitureFactory> furnitureFactory;
};