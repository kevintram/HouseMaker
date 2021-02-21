#include "amenities/Bathroom.h"
#include <iostream>

Bathroom::Bathroom(string name) {
    this->name = name;
}

void Bathroom::setToilet(Toilet toilet) {
    this->toilet = toilet;
}

void Bathroom::setShower(Shower shower) {
    this->shower = shower;
}

void Bathroom::setSink(Sink sink) {
    this->sink = sink;
}

void Bathroom::print() {
    cout << name << endl;
    toilet.print();
    shower.print();
    sink.print();
}