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

class AbstractHouseBuilder {
    public:
        virtual AbstractHouseBuilder& reset() = 0;

        virtual AbstractHouseBuilder& addBathroom(const shared_ptr<Bathroom>& bathroom) = 0;
        virtual AbstractHouseBuilder& addBedroom(const shared_ptr<Bedroom>& bedroom) = 0;
        virtual AbstractHouseBuilder& setGarage(const shared_ptr<Garage>& garage) = 0;
        virtual AbstractHouseBuilder& setGarden(const shared_ptr<Garden>& garden) = 0;
        virtual AbstractHouseBuilder& setKitchen(const shared_ptr<Kitchen>& kitchen) = 0;
        virtual AbstractHouseBuilder& setLivingRoom(const shared_ptr<LivingRoom>& livingRoom) = 0;
        virtual AbstractHouseBuilder& setOffice(const shared_ptr<Office>& office) = 0;
        virtual AbstractHouseBuilder& setPlayground(const shared_ptr<Playground>& playground) = 0;
        virtual AbstractHouseBuilder& setPool(const shared_ptr<Pool>& pool) = 0;
        virtual AbstractHouseBuilder& setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom) = 0; 

        virtual House* build() = 0;
    protected: 
        House* house;
};