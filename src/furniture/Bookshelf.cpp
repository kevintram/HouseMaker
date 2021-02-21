#include "furniture/Bookshelf.h"
#include <iostream>

Bookshelf::Bookshelf(string name) {
    this->name = name;
}

void Bookshelf::print() {
    cout << name << endl;
}