#pragma once 

#include <string>
#include <iostream>

using namespace std;

class TV {
    protected: 
        string name;
    public: 
        inline TV(string name = "TV") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoTV : public TV {
    public:
        inline ArtDecoTV(string name = "Art Deco TV"): TV(name) {}
};

class ModernTV : public TV {
    public:
        inline ModernTV(string name = "Modern TV") : TV(name) {}
};