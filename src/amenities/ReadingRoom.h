#pragma once

#include <string>
#include <iostream>
#include "furniture/Bookshelf.h"
#include "furniture/Chair.h"

using namespace std;

class ReadingRoom {
    private: 
        string name;
    public:
        Bookshelf* bookshelf;
        Chair* chair;

        inline ReadingRoom(string name = "Reading Room") {
            this->name = name;
        }

        inline void print() {
            cout << name << endl;
        }
};