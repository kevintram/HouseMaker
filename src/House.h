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
#include "memory"
#include <vector>

using namespace std;

/**
 * A representation of a house that contains amenities.
 */
class House {
    public:
        House(int bathroomCapacity = 2, int bedroomCapacity = 3);
        void print();

        void addBathroom(const shared_ptr<Bathroom>& bathroom);
        void addBedroom(const shared_ptr<Bedroom>& bedroom);
        void setGarage(const shared_ptr<Garage>& garage);
        void setGarden(const shared_ptr<Garden>& garden);
        void setKitchen(const shared_ptr<Kitchen>& kitchen);
        void setLivingRoom(const shared_ptr<LivingRoom>& livingRoom);
        void setOffice(const shared_ptr<Office>& office);
        void setPlayground(const shared_ptr<Playground>& playground);
        void setPool(const shared_ptr<Pool>& pool);
        void setReadingRoom(const shared_ptr<ReadingRoom>& readingroom);

    private:
        int bathroomCapacity;
        int bedroomCapacity;

        vector<shared_ptr<Bathroom>> bathrooms;
        vector<shared_ptr<Bedroom>> bedrooms;
        shared_ptr<Garage> garage;
        shared_ptr<Garden> garden;
        shared_ptr<Kitchen> kitchen;
        shared_ptr<LivingRoom> livingRoom;
        shared_ptr<Office> office;
        shared_ptr<Playground> playground;
        shared_ptr<Pool> pool;
        shared_ptr<ReadingRoom> readingRoom;
};