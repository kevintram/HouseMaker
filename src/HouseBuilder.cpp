#include "HouseBuilder.h"

HouseBuilder::HouseBuilder() {
    house = new House();
}

HouseBuilder::~HouseBuilder() {
    delete house;
}

HouseBuilder::HouseBuilder(const HouseBuilder& other) {
    this->house = new House();
    *(this->house) = *other.house;
}

HouseBuilder& HouseBuilder::operator=(const HouseBuilder& other) {
    this->house = new House();
    *(this->house) = *other.house;
    return *this;
}

HouseBuilder& HouseBuilder::reset() {
    delete house;
    this->house = new House();
    return *this;
}

HouseBuilder& HouseBuilder::addBathroom(const Bathroom& bathroom) {
    house->addBathroom(bathroom);
    return *this;
}