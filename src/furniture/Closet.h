#pragma once

#include <string>
#include <iostream>
using namespace std;

class Closet {
    protected: 
        string name;
    public:
        inline Closet(string name = "Closet") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }

};

class ArtDecoCloset : public Closet {
    public: 
        inline ArtDecoCloset(string name = "Art Deco Closet") : Closet(name) {}
};

class ModernCloset : public Closet {
    public: 
        inline ModernCloset(string name = "Modern Closet") : Closet(name) {}
};