#pragma once

#include <string>
#include <iostream>
#include "furniture/Sofa.h"
#include "furniture/TV.h"
#include "furniture/CoffeeTable.h"

using namespace std;

class LivingRoom {
    private:
        string name; 
    public:
        Sofa* sofa;
        TV* TV;
        CoffeeTable* coffeeTable;

        inline LivingRoom(string name = "Living Room") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
            sofa->print();
            TV->print();
            coffeeTable->print();
        }
};