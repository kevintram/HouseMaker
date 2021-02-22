#pragma once

#include "House.h"
#include "amenities/Bathroom.h"
#include "amenities/Bedroom.h"
#include "amenities/Garage.h"
#include "amenities/Garden.h"
#include "amenities/Kitchen.h"
#include "amenities/LivingRoom.h"
#include "amenities/Office.h"
#include "amenities/Playground.h"
#include "amenities/Pool.h"
#include "amenities/ReadingRoom.h"

class HouseBuilder {
    public:
        HouseBuilder(int bathroomCapacity = 2, int bedroomCapacity = 3);
        ~HouseBuilder();
        HouseBuilder(const HouseBuilder& other);
        HouseBuilder& operator=(const HouseBuilder& other);

        HouseBuilder& reset();

        HouseBuilder& addBathroom(const shared_ptr<Bathroom>& bathroom);
        HouseBuilder& addBedroom(const shared_ptr<Bedroom>& bedroom);
        HouseBuilder& setGarage(const shared_ptr<Garage>& garage);
        HouseBuilder& setGarden(const shared_ptr<Garden>& garden);
        HouseBuilder& setKitchen(const shared_ptr<Kitchen>& kitchen);
        HouseBuilder& setLivingRoom(const shared_ptr<LivingRoom>& livingRoom);
        HouseBuilder& setOffice(const shared_ptr<Office>& office);
        HouseBuilder& setPlayground(const shared_ptr<Playground>& playground);
        HouseBuilder& setPool(const shared_ptr<Pool>& pool);
        HouseBuilder& setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom);  

        House* build();
    private: 
        House* house;
};