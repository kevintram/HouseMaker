#pragma once 

#include <stack>
#include "menus/Menu.h"

class NavController {
    public: 
        static NavController& getInstance();

        void navigate(Menu& menu);
        void popBackStack();
        Menu& getCurrentMenu();
        bool backStackIsEmpty();

        NavController(NavController const&) = delete;
        void operator=(NavController const&) = delete;
    private: 
        NavController();

        stack<Menu*> menuBackStack;
};