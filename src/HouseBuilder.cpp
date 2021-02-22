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

HouseBuilder& HouseBuilder::addBedroom(const Bedroom& bedroom) {
    house->addBedroom(bedroom);
    return *this;
}

HouseBuilder& HouseBuilder::setGarage(const Garage& garage) {
    house->setGarage(garage);
    return *this;
}

HouseBuilder& HouseBuilder::setGarden(const Garden& garden) {
    house->setGarden(garden);
    return *this;
}

HouseBuilder& HouseBuilder::setKitchen(const Kitchen& kitchen) {
    house->setKitchen(kitchen);
    return *this;
}

HouseBuilder& HouseBuilder::setLivingRoom(const LivingRoom& livingRoom) {
    house->setLivingRoom(livingRoom);
    return *this;
}

HouseBuilder& HouseBuilder::setOffice(const Office& office) {
    house->setOffice(office);
    return *this;
}

HouseBuilder& HouseBuilder::setPlayground(const Playground& playground) {
    house->setPlayground(playground);
    return *this;
}

HouseBuilder& HouseBuilder::setPool(const Pool& pool) {
    house->setPool(pool);
    return *this;
}

HouseBuilder& HouseBuilder::setReadingRoom(const ReadingRoom& readingRoom) {
    house->setReadingRoom(readingRoom);
    return *this;
}