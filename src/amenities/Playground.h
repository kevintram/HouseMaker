#pragma once

#include <string>
#include <iostream>

using namespace std;

class Playground {
    private:
        string name;
    public: 
        inline Playground(string name = "Playground") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }
};