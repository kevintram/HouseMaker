#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Bookshelf {
    protected: 
        string name;
    public: 
        inline Bookshelf(string name = "Bookshelf") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoBookshelf : public Bookshelf {
    public:
        inline ArtDecoBookshelf(string name = "Art Deco Bookshelf"): Bookshelf(name) {}
};

class ModernBookshelf : public Bookshelf {
    public:
        inline ModernBookshelf(string name = "Modern Bookshelf") : Bookshelf(name) {}
};