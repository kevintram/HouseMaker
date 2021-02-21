#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Stove {
    protected: 
        string name;
    public: 
        inline Stove(string name = "Stove") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoStove : public Stove {
    public:
        inline ArtDecoStove(string name = "Art Deco Stove"): Stove(name) {}
};

class ModernStove : public Stove {
    public:
        inline ModernStove(string name = "Modern Stove") : Stove(name) {}
};