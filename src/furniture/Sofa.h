#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Sofa {
    protected: 
        string name;
    public: 
        inline Sofa(string name = "Sofa") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoSofa : public Sofa {
    public:
        inline ArtDecoSofa(string name = "Art Deco Sofa"): Sofa(name) {}
};

class ModernSofa : public Sofa {
    public:
        inline ModernSofa(string name = "Modern Sofa") : Sofa(name) {}
};