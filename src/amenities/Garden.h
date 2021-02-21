#pragma once

#include <string>
#include <iostream>

using namespace std;

class Garden {
    private:
        string name;
    public: 
        inline Garden(string name = "Garden") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }
};