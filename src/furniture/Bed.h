#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Bed {
    protected: 
        string name;
    public: 
        inline Bed(string name = "Bed") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoBed : public Bed {
    public:
        inline ArtDecoBed(string name = "Art Deco Bed"): Bed(name) {}
};

class ModernBed : public Bed {
    public:
        inline ModernBed(string name = "Modern Bed") : Bed(name) {}
};