#pragma once 

#include <string>
#include <iostream>
using namespace std;

class Shower {
    protected:
        string name;
    public:
        inline Shower(string name = "Shower") {
            this->name = name;
        }


        inline void print() {
            cout << name << endl;
        }

        inline string getName() {
            return name;
        }
};

class ArtDecoShower : public Shower {
    public: 
        inline ArtDecoShower(string name = "Art Deco Shower") : Shower(name) {}
};

class ModernShower : public Shower {
    public: 
        inline ModernShower(string name = "Modern Shower") : Shower(name) {}
};