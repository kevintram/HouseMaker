#pragma once

#include "House.h"
#include "amenities/Bathroom.h"
#include "amenities/Kitchen.h"

class HouseBuilder {
    public:
        HouseBuilder();
        ~HouseBuilder();
        HouseBuilder(const HouseBuilder& other);
        HouseBuilder& operator=(const HouseBuilder& other);

        HouseBuilder& reset();

        HouseBuilder& addBathroom(const Bathroom& bathroom);
        HouseBuilder& setKitchen(const Kitchen& kitchen);

        House& build();
    private: 
        House* house;
};