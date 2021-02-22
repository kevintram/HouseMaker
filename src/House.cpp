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

void House::addBedroom(const Bedroom& bedroom) {
    bedrooms.push_back(bedroom);
}

void House::setGarage(const Garage& garage) {
    this->garage = garage;
}

void House::setGarden(const Garden& garden) {
    this->garden = garden;
}

void House::setKitchen(const Kitchen& kitchen) {
    this->kitchen = kitchen;
}

void House::setLivingRoom(const LivingRoom& livingRoom) {
    this->livingRoom = livingRoom;
}

void House::setOffice(const Office& office) {
    this->office = office;
}

void House::setPlayground(const Playground& playground) {
    this->playground = playground;
}

void House::setPool(const Pool& pool) {
    this->pool = pool;
}

void House::setReadingRoom(const ReadingRoom& readingRoom) {
    this->readingRoom = readingRoom;
}