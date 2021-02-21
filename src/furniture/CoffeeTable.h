#pragma once 

#include <string>
#include <iostream>

using namespace std;

class CoffeeTable {
    protected: 
        string name;
    public: 
        inline CoffeeTable(string name = "CoffeeTable") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoCoffeeTable : public CoffeeTable {
    public:
        inline ArtDecoCoffeeTable(string name = "Art Deco CoffeeTable"): CoffeeTable(name) {}
};

class ModernCoffeeTable : public CoffeeTable {
    public:
        inline ModernCoffeeTable(string name = "Modern CoffeeTable") : CoffeeTable(name) {}
};