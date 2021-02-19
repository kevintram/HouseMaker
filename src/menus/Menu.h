#pragma once

#include <string>
#include <vector>
#include "navigation/MenuNavController.h"

using namespace std;

class Menu {
    public: 
        Menu(bool popBackStackInclusive = false);
        bool getIsPopBackStackInclusive() const;
        virtual void chooseOption(int option);
    private: 
        MenuNavController* navController;
        bool isPopBackStackInclusive;
};