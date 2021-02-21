#pragma once 

#include <string>
#include <iostream>
using namespace std;

class Toilet {
    protected:
        string name;
    public:
        inline Toilet(string name = "Toilet") {
            this->name = name;
        }


        inline void print() {
            cout << name << endl;
        }

        inline string getName() {
            return name;
        }
};

class ArtDecoToilet : public Toilet {
    public :
        ArtDecoToilet(string name = "Art Deco Toilet") : Toilet(name) {}
};

class ModernToilet : public Toilet {
    public :
        ModernToilet(string name = "Modern Toilet") : Toilet(name) {}
};