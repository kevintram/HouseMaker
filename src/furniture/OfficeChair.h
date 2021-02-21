#pragma once 

#include <string>
#include <iostream>

using namespace std;

class OfficeChair {
    protected: 
        string name;
    public: 
        inline OfficeChair(string name = "OfficeChair") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoOfficeChair : public OfficeChair {
    public:
        inline ArtDecoOfficeChair(string name = "Art Deco OfficeChair"): OfficeChair(name) {}
};

class ModernOfficeChair : public OfficeChair {
    public:
        inline ModernOfficeChair(string name = "Modern OfficeChair") : OfficeChair(name) {}
};