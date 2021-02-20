#pragma once 

#include <stack>
#include "menus/Menu.h"

class NavController {
    public: 
        void navigate(Menu& menu);
        void popBackStack();
        Menu& getCurrentMenu();
        NavController();
    private: 
        stack<Menu*> menuBackStack;
};