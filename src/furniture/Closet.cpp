#include "furniture/Closet.h"
#include <iostream>

Closet::Closet(string name) {
    this->name = name;
}

void Closet::print() {
    cout << name << endl;
}