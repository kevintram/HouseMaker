#pragma once

#include <string>
#include "furniture/Oven.h"
#include "furniture/Counter.h"
#include "furniture/Stove.h"

using namespace std;

class Kitchen {
    private:
        string name;
        Oven* oven;
        Counter* counter;
        Stove* stove;
    public:
        inline Kitchen(string name = "Kitchen") {
            this->name = name;
        }

        inline void setOven(Oven* oven) {
            this->oven = oven;
        }

        inline void setCounter(Counter* counter) {
            this->counter = counter;
        }

        inline void setStove(Stove* stove) {
            this->stove = stove;
        }

        inline Oven* getOven() {
            return this->oven;
        }

        inline Counter* getCounter() {
            return this->counter;
        }

        inline Stove* getStove() {
            return this->stove;
        }

        inline void print() {
            cout << name << endl;
            oven->print();
            counter->print();
            stove->print();
        }
};