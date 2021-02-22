#include "GenericHouseBuilder.h"

GenericHouseBuilder::GenericHouseBuilder(int bathroomCapacity, int bedroomCapacity) {
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

GenericHouseBuilder::~GenericHouseBuilder() {
    delete house;
}

GenericHouseBuilder::GenericHouseBuilder(const GenericHouseBuilder& other) {
    this->house = new House();
    *(this->house) = *other.house;
}

GenericHouseBuilder& GenericHouseBuilder::operator=(const GenericHouseBuilder& other) {
    this->house = new House();
    *(this->house) = *other.house;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::reset() {
    delete house;
    this->house = new House();
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::addBathroom(const shared_ptr<Bathroom>& bathroom) {
    house->addBathroom(bathroom);
    numBathrooms++;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::addBedroom(const shared_ptr<Bedroom>& bedroom) {
    house->addBedroom(bedroom);
    numBedrooms++;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setGarage(const shared_ptr<Garage>& garage) {
    house->setGarage(garage);
    m_hasGarage = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setGarden(const shared_ptr<Garden>& garden) {
    house->setGarden(garden);
    m_hasGarden = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setKitchen(const shared_ptr<Kitchen>& kitchen) {
    house->setKitchen(kitchen);
    m_hasKitchen = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setLivingRoom(const shared_ptr<LivingRoom>& livingRoom) {
    house->setLivingRoom(livingRoom);
    m_hasLivingRoom = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setOffice(const shared_ptr<Office>& office) {
    house->setOffice(office);
    m_hasOffice = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setPlayground(const shared_ptr<Playground>& playground) {
    house->setPlayground(playground);
    m_hasPlayground = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setPool(const shared_ptr<Pool>& pool) {
    house->setPool(pool);
    m_hasPool = true;
    return *this;
}

GenericHouseBuilder& GenericHouseBuilder::setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom) {
    house->setReadingRoom(readingRoom);
    m_hasReadingRoom = true;
    return *this;
}

bool GenericHouseBuilder::hasSpaceForBathroom() { return numBathrooms < bathroomCapacity; }
bool GenericHouseBuilder::hasSpaceForBedroom() {  return numBedrooms < bedroomCapacity; }
bool GenericHouseBuilder::hasGarage() {           return m_hasGarage; }
bool GenericHouseBuilder::hasGarden() {           return m_hasGarden; }
bool GenericHouseBuilder::hasKitchen() {          return m_hasKitchen; }
bool GenericHouseBuilder::hasLivingRoom() {       return m_hasLivingRoom; }
bool GenericHouseBuilder::hasOffice() {           return m_hasOffice; }
bool GenericHouseBuilder::hasPlayground() {       return m_hasPlayground; }
bool GenericHouseBuilder::hasPool() {             return m_hasPool; }
bool GenericHouseBuilder::hasReadingRoom() {      return m_hasReadingRoom; }

House* GenericHouseBuilder::build() {
    return house;
}