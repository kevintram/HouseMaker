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

/**
 * Builder interface for a House.
 */
class HouseBuilder {
    public:
        virtual HouseBuilder& reset() = 0;

        virtual HouseBuilder& addBathroom(const shared_ptr<Bathroom>& bathroom) = 0;
        virtual HouseBuilder& addBedroom(const shared_ptr<Bedroom>& bedroom) = 0;
        virtual HouseBuilder& setGarage(const shared_ptr<Garage>& garage) = 0;
        virtual HouseBuilder& setGarden(const shared_ptr<Garden>& garden) = 0;
        virtual HouseBuilder& setKitchen(const shared_ptr<Kitchen>& kitchen) = 0;
        virtual HouseBuilder& setLivingRoom(const shared_ptr<LivingRoom>& livingRoom) = 0;
        virtual HouseBuilder& setOffice(const shared_ptr<Office>& office) = 0;
        virtual HouseBuilder& setPlayground(const shared_ptr<Playground>& playground) = 0;
        virtual HouseBuilder& setPool(const shared_ptr<Pool>& pool) = 0;
        virtual HouseBuilder& setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom) = 0; 

        virtual House* build() = 0;
    protected: 
        House* house;
};