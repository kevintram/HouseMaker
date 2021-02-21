#pragma once 

#include <string>
using namespace std;

class Bookshelf {
    public: 
        Bookshelf(string name = "Bookshelf");
        void print();
    private: 
        string name;
};