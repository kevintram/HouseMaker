#pragma once

#include <string>
#include <iostream>

using namespace std;

class Pool {
    private: 
        string name;
    public:
        inline Pool(string name = "Pool") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }
};