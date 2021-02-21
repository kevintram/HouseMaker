#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Garage {
    private:
        string name;
    public: 
        inline Garage(string name = "Garage") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }
};