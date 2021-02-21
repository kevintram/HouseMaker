#pragma once 

#include <string>
#include <iostream>
#include "furniture/Toilet.h"
#include "furniture/Shower.h"
#include "furniture/Sink.h"

using namespace std;

class Bathroom {
    private:
        string name; 
    public: 
        Toilet* toilet;
        Shower* shower;
        Sink* sink;

        inline Bathroom(string name = "Bathroom") {
            this->name = name;
        }

        void print() {
            cout << name << endl;
            toilet->print();
            shower->print();
            sink->print();
        }

};