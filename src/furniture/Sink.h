#pragma once 

#include <string>
#include <iostream>
using namespace std;

class Sink {
    protected:
        string name;
    public:
        inline Sink(string name = "Sink") {
            this->name = name;
        }


        inline void print() {
            cout << name << endl;
        }

        inline string getName() {
            return name;
        }
};

class ArtDecoSink : public Sink {
    public: 
        inline ArtDecoSink(string name = "Art Deco Sink") : Sink(name) {}
};

class ModernSink : public Sink {
    public: 
        inline ModernSink(string name = "Modern Sink"): Sink(name) {}
};