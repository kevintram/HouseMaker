#pragma once

#include <string>
#include <vector>

using namespace std;

class Menu {
    public: 
        Menu(bool isPopBackStackInclusive = false);
        bool getIsPopBackStackInclusive() const;
        virtual void choose(int option) = 0;
        virtual void print() = 0;
    private: 
        bool isPopBackStackInclusive;
};