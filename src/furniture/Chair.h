#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Chair {
    protected: 
        string name;
    public: 
        inline Chair(string name = "Chair") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoChair : public Chair {
    public:
        inline ArtDecoChair(string name = "Art Deco Chair"): Chair(name) {}
};

class ModernChair : public Chair {
    public:
        inline ModernChair(string name = "Modern Chair") : Chair(name) {}
};