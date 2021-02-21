#pragma once

#include <string>
#include "furniture/Oven.h"
#include "furniture/Counter.h"
#include "furniture/Stove.h"

using namespace std;

class Kitchen {
    private:
        string name;

    public:
        Oven* oven;
        Counter* counter;
        Stove* stove;

        inline Kitchen(string name = "Kitchen") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
            oven->print();
            counter->print();
            stove->print();
        }
};