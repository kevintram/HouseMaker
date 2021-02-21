#include "House.h"
#include <iostream>

using namespace std;

House::House(int bathroomCapacity, int bedroomCapacity) {
    this->bathroomCapacity = bathroomCapacity;
    this->bedroomCapacity = bedroomCapacity;
}

void House::print() {
    for (Bathroom bathroom : bathrooms) {
        bathroom.print();
    }
}

void House::addBathroom(const Bathroom& bathroom) {
    bathrooms.push_back(bathroom);
}

void House::setKitchen(const Kitchen& kitchen) {
    this->kitchen = kitchen;
}