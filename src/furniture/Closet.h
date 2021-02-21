#pragma once

#include <string>
using namespace std;

class Closet {
    public:
        Closet(string name = "Closet");
        void print();
    private: 
        string name;
};