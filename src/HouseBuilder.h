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
        HouseBuilder();
        ~HouseBuilder();
        HouseBuilder(const HouseBuilder& other);
        HouseBuilder& operator=(const HouseBuilder& other);

        HouseBuilder& reset();

        HouseBuilder& addBathroom(const Bathroom& bathroom);
        HouseBuilder& addBedroom(const Bedroom& bedroom);
        HouseBuilder& setGarage(const Garage& garage);
        HouseBuilder& setGarden(const Garden& garden);
        HouseBuilder& setKitchen(const Kitchen& kitchen);
        HouseBuilder& setLivingRoom(const LivingRoom& livingRoom);
        HouseBuilder& setOffice(const Office& office);
        HouseBuilder& setPlayground(const Playground& playground);
        HouseBuilder& setPool(const Pool& pool);
        HouseBuilder& setReadingRoom(const ReadingRoom& readingRoom);  

        House& build();
    private: 
        House* house;
};