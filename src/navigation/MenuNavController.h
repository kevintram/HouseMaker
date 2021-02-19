#pragma once

#include <stack>
#include "menus/Menu.h"

using namespace std;

class MenuNavController {
    public: 
        void popBackStack();
        void navigate(Menu menu);
        Menu& getCurrentMenu() const;

        static MenuNavController* getInstance();
        // do something with destructor
    private:
        stack<Menu&> menuBackStack;
    protected: 
        MenuNavController();
        static MenuNavController* instance;
};