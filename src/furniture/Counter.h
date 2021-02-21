#pragma once 

#include <string>
#include <iostream>

using namespace std;

class Counter {
    protected: 
        string name;
    public: 
        inline Counter(string name = "Counter") {
            this->name = name;
        }
        
        inline void print() {
            cout << name << endl;
        }

        inline string getName() const {
            return name;
        }
};

class ArtDecoCounter : public Counter {
    public:
        inline ArtDecoCounter(string name = "Art Deco Counter"): Counter(name) {}
};

class ModernCounter : public Counter {
    public:
        inline ModernCounter(string name = "Modern Counter") : Counter(name) {}
};