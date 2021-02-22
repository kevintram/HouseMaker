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

HouseBuilder& HouseBuilder::addBathroom(const shared_ptr<Bathroom>& bathroom) {
    house->addBathroom(bathroom);
    return *this;
}

HouseBuilder& HouseBuilder::addBedroom(const shared_ptr<Bedroom>& bedroom) {
    house->addBedroom(bedroom);
    return *this;
}

HouseBuilder& HouseBuilder::setGarage(const shared_ptr<Garage>& garage) {
    house->setGarage(garage);
    return *this;
}

HouseBuilder& HouseBuilder::setGarden(const shared_ptr<Garden>& garden) {
    house->setGarden(garden);
    return *this;
}

HouseBuilder& HouseBuilder::setKitchen(const shared_ptr<Kitchen>& kitchen) {
    house->setKitchen(kitchen);
    return *this;
}

HouseBuilder& HouseBuilder::setLivingRoom(const shared_ptr<LivingRoom>& livingRoom) {
    house->setLivingRoom(livingRoom);
    return *this;
}

HouseBuilder& HouseBuilder::setOffice(const shared_ptr<Office>& office) {
    house->setOffice(office);
    return *this;
}

HouseBuilder& HouseBuilder::setPlayground(const shared_ptr<Playground>& playground) {
    house->setPlayground(playground);
    return *this;
}

HouseBuilder& HouseBuilder::setPool(const shared_ptr<Pool>& pool) {
    house->setPool(pool);
    return *this;
}

HouseBuilder& HouseBuilder::setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom) {
    house->setReadingRoom(readingRoom);
    return *this;
}