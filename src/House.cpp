#include "House.h"
#include <iostream>

using namespace std;

House::House(int bathroomCapacity, int bedroomCapacity) {
    this->bathroomCapacity = bathroomCapacity;
    this->bedroomCapacity = bedroomCapacity;

    garage = nullptr;
    garden = nullptr;
    kitchen = nullptr;
    livingRoom = nullptr;
    office = nullptr;
    playground = nullptr;
    pool = nullptr;
    readingRoom = nullptr;
}

void House::print() {
    for (int i = 0; i < bathrooms.size(); i++) {
        bathrooms[i]->print();
    }
}

void House::addBathroom(const shared_ptr<Bathroom>& bathroom) {
    bathrooms.push_back(move(bathroom));
}

void House::addBedroom(const shared_ptr<Bedroom>& bedroom) {
    bedrooms.push_back(move(bedroom));
}

void House::setGarage(const shared_ptr<Garage>& garage) {
    this->garage = garage;
}

void House::setGarden(const shared_ptr<Garden>& garden) {
    this->garden = garden;
}

void House::setKitchen(const shared_ptr<Kitchen>& kitchen) {
    this->kitchen = kitchen;
}

void House::setLivingRoom(const shared_ptr<LivingRoom>& livingRoom) {
    this->livingRoom = livingRoom;
}

void House::setOffice(const shared_ptr<Office>& office) {
    this->office = office;
}

void House::setPlayground(const shared_ptr<Playground>& playground) {
    this->playground = playground;
}

void House::setPool(const shared_ptr<Pool>& pool) {
    this->pool = pool;
}

void House::setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom) {
    this->readingRoom = readingRoom;
}