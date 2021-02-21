#pragma once 

#include "menus/Menu.h"
#include <vector>
#include <string>

class StyleMenu : public Menu {
    public: 
        StyleMenu(bool isPopBackStackInclusive = false);
        void print();
        void choose(int option);
    private:
        vector<string> options;
};