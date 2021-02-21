#pragma once

#include "amenities/Bathroom.h"
#include <vector>

using namespace std;

class House {
    public:
        House(int bathroomCapacity = 2, int bedroomCapacity = 3);
        void print();

        void addBathroom(const Bathroom& bathroom);
    private:
        int bathroomCapacity;
        int bedroomCapacity;

        vector<Bathroom> bathrooms;
};