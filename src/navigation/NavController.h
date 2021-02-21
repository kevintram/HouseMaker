#pragma once 

#include <stack>
#include "menus/Menu.h"
#include <memory>

class NavController {
    public: 
        static NavController& getInstance();

        void navigate(const shared_ptr<Menu>& menu);
        void popBackStack();
        Menu& getCurrentMenu();
        bool backStackIsEmpty();

        NavController(NavController const&) = delete;
        void operator=(NavController const&) = delete;
    private: 
        NavController();

        stack<shared_ptr<Menu>> menuBackStack;
};