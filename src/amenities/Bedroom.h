#pragma once

#include <string>
#include <iostream>
#include "furniture/Bed.h"
#include "furniture/Closet.h"

using namespace std;

class Bedroom {
    private:
        string name;
    public:
        Bed* bed;
        Closet* closet;

        inline Bedroom(string name = "Bedroom") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
            bed->print();
            closet->print();
        }
};