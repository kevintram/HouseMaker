#pragma once

#include "amenities/Bathroom.h"
#include "amenities/Kitchen.h"
#include <vector>

using namespace std;

class House {
    public:
        House(int bathroomCapacity = 2, int bedroomCapacity = 3);
        void print();

        void addBathroom(const Bathroom& bathroom);
        void setKitchen(const Kitchen& kitchen);
    private:
        int bathroomCapacity;
        int bedroomCapacity;

        vector<Bathroom> bathrooms;
        Kitchen kitchen;
};