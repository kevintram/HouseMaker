#pragma once

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
#include <vector>

using namespace std;

class House {
    public:
        House(int bathroomCapacity = 2, int bedroomCapacity = 3);
        void print();

        void addBathroom(const Bathroom& bathroom);
        void addBedroom(const Bedroom& bedroom);
        void setGarage(const Garage& garage);
        void setGarden(const Garden& garden);
        void setKitchen(const Kitchen& kitchen);
        void setLivingRoom(const LivingRoom& livingRoom);
        void setOffice(const Office& office);
        void setPlayground(const Playground& playground);
        void setPool(const Pool& pool);
        void setReadingRoom(const ReadingRoom& readingroom);

    private:
        int bathroomCapacity;
        int bedroomCapacity;

        vector<Bathroom> bathrooms;
        vector<Bedroom> bedrooms;
        Garage garage;
        Garden garden;
        Kitchen kitchen;
        LivingRoom livingRoom;
        Office office;
        Playground playground;
        Pool pool;
        ReadingRoom readingRoom;
};