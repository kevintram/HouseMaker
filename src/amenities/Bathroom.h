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
        Toilet* toilet;
        Shower* shower;
        Sink* sink;

    public: 
        inline Bathroom(string name = "Bathroom") {
            this->name = name;
        }

        inline void setToilet(Toilet* toilet) {
            this->toilet = toilet;
        }

        inline void setShower(Shower* shower) {
            this->shower = shower;
        }

        inline void setSink(Sink* sink) {
            this->sink = sink;
        }

        inline Toilet* getToilet() {
            return this->toilet;
        }

        inline Shower* getShower() {
            return this->shower;
        }

        inline Sink* getSink() {
            return this->sink;
        }

        void print() {
            cout << name << endl;
            toilet->print();
            shower->print();
            sink->print();
        }

};