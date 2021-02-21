#pragma once

#include "House.h"
#include "amenities/Bathroom.h"

class HouseBuilder {
    public:
        HouseBuilder();
        ~HouseBuilder();
        HouseBuilder(const HouseBuilder& other);
        HouseBuilder& operator=(const HouseBuilder& other);

        HouseBuilder& reset();

        HouseBuilder& addBathroom(const Bathroom& bathroom);

        House& build();
    private: 
        House* house;
};