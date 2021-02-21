#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Desk {
    protected: 
        string name;
    public: 
        inline Desk(string name = "Desk") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoDesk : public Desk {
    public:
        inline ArtDecoDesk(string name = "Art Deco Desk"): Desk(name) {}
};

class ModernDesk : public Desk {
    public:
        inline ModernDesk(string name = "Modern Desk") : Desk(name) {}
};