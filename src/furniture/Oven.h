#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Oven {
    protected: 
        string name;
    public: 
        inline Oven(string name = "Oven") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoOven : public Oven {
    public:
        inline ArtDecoOven(string name = "Art Deco Oven"): Oven(name) {}
};

class ModernOven : public Oven {
    public:
        inline ModernOven(string name = "Modern Oven") : Oven(name) {}
};