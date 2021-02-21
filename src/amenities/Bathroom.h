#pragma once 

#include <string>
#include "furniture/Toilet.h"
#include "furniture/Shower.h"
#include "furniture/Sink.h"

using namespace std;

class Bathroom {
    public: 
        Bathroom(string name = "Bathroom");
        void setToilet(Toilet toilet);
        void setShower(Shower shower);
        void setSink(Sink sink);
        void print();
    private:
        string name; 
        Toilet toilet;
        Shower shower;
        Sink sink;
};