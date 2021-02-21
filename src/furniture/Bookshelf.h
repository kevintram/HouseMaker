#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Bookshelf {
    protected: 
        string name;
    public: 
        inline Bookshelf(string name = "Bookshelf") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};