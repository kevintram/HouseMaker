#pragma once

#include <string>
#include <iostream>
using namespace std;

class Closet {
    protected: 
        string name;
    public:
        inline Closet(string name = "Closet") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }

};