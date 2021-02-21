#pragma once

#include <string>
#include "furniture/Desk.h"
#include "furniture/OfficeChair.h"

using namespace std;

class Office {
    private:
        string name;
    public:
        Desk* desk;
        OfficeChair* officeChair;

        inline Office(string name = "Office") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
            desk->print();
            officeChair->print();
        }
};