#include "HouseBuilder.h"

HouseBuilder::HouseBuilder(int bathroomCapacity, int bedroomCapacity) {
    house = new House(bathroomCapacity, bedroomCapacity);
    this->bathroomCapacity = bathroomCapacity;
    this->bedroomCapacity = bedroomCapacity;

    numBedrooms = 0;
    numBathrooms = 0;
    m_hasGarage = false;
    m_hasGarden = false;
    m_hasKitchen = false;
    m_hasLivingRoom = false;
    m_hasOffice = false;
    m_hasPlayground = false;
    m_hasPool = false;
    m_hasReadingRoom = false;
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
    numBathrooms++;
    return *this;
}

HouseBuilder& HouseBuilder::addBedroom(const shared_ptr<Bedroom>& bedroom) {
    house->addBedroom(bedroom);
    numBedrooms++;
    return *this;
}

HouseBuilder& HouseBuilder::setGarage(const shared_ptr<Garage>& garage) {
    house->setGarage(garage);
    m_hasGarage = true;
    return *this;
}

HouseBuilder& HouseBuilder::setGarden(const shared_ptr<Garden>& garden) {
    house->setGarden(garden);
    m_hasGarden = true;
    return *this;
}

HouseBuilder& HouseBuilder::setKitchen(const shared_ptr<Kitchen>& kitchen) {
    house->setKitchen(kitchen);
    m_hasKitchen = true;
    return *this;
}

HouseBuilder& HouseBuilder::setLivingRoom(const shared_ptr<LivingRoom>& livingRoom) {
    house->setLivingRoom(livingRoom);
    m_hasLivingRoom = true;
    return *this;
}

HouseBuilder& HouseBuilder::setOffice(const shared_ptr<Office>& office) {
    house->setOffice(office);
    m_hasOffice = true;
    return *this;
}

HouseBuilder& HouseBuilder::setPlayground(const shared_ptr<Playground>& playground) {
    house->setPlayground(playground);
    m_hasPlayground = true;
    return *this;
}

HouseBuilder& HouseBuilder::setPool(const shared_ptr<Pool>& pool) {
    house->setPool(pool);
    m_hasPool = true;
    return *this;
}

HouseBuilder& HouseBuilder::setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom) {
    house->setReadingRoom(readingRoom);
    m_hasReadingRoom = true;
    return *this;
}

bool HouseBuilder::hasSpaceForBathroom() { return numBathrooms < bathroomCapacity; }
bool HouseBuilder::hasSpaceForBedroom() {  return numBedrooms < bedroomCapacity; }
bool HouseBuilder::hasGarage() {           return m_hasGarage; }
bool HouseBuilder::hasGarden() {           return m_hasGarden; }
bool HouseBuilder::hasKitchen() {          return m_hasKitchen; }
bool HouseBuilder::hasLivingRoom() {       return m_hasLivingRoom; }
bool HouseBuilder::hasOffice() {           return m_hasOffice; }
bool HouseBuilder::hasPlayground() {       return m_hasPlayground; }
bool HouseBuilder::hasPool() {             return m_hasPool; }
bool HouseBuilder::hasReadingRoom() {      return m_hasReadingRoom; }

House* HouseBuilder::build() {
    return house;
}