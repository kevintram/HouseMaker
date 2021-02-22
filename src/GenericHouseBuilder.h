#pragma once

#include "HouseBuilder.h"

/**
 * A builder for a generic house.
 */
class GenericHouseBuilder : public HouseBuilder {
    public:
        GenericHouseBuilder(int bathroomCapacity = 2, int bedroomCapacity = 3);
        ~GenericHouseBuilder();
        GenericHouseBuilder(const GenericHouseBuilder& other);
        GenericHouseBuilder& operator=(const GenericHouseBuilder& other);

        GenericHouseBuilder& reset();

        GenericHouseBuilder& addBathroom(const shared_ptr<Bathroom>& bathroom);
        GenericHouseBuilder& addBedroom(const shared_ptr<Bedroom>& bedroom);
        GenericHouseBuilder& setGarage(const shared_ptr<Garage>& garage);
        GenericHouseBuilder& setGarden(const shared_ptr<Garden>& garden);
        GenericHouseBuilder& setKitchen(const shared_ptr<Kitchen>& kitchen);
        GenericHouseBuilder& setLivingRoom(const shared_ptr<LivingRoom>& livingRoom);
        GenericHouseBuilder& setOffice(const shared_ptr<Office>& office);
        GenericHouseBuilder& setPlayground(const shared_ptr<Playground>& playground);
        GenericHouseBuilder& setPool(const shared_ptr<Pool>& pool);
        GenericHouseBuilder& setReadingRoom(const shared_ptr<ReadingRoom>& readingRoom);  

        bool hasSpaceForBathroom();
        bool hasSpaceForBedroom();
        bool hasGarage();
        bool hasGarden();
        bool hasKitchen();
        bool hasLivingRoom();
        bool hasOffice();
        bool hasPlayground();
        bool hasPool();
        bool hasReadingRoom();

        House* build();

    private:
        int bathroomCapacity;
        int bedroomCapacity;
        int numBathrooms;
        int numBedrooms;
        bool m_hasGarage;
        bool m_hasGarden;
        bool m_hasKitchen;
        bool m_hasLivingRoom;
        bool m_hasOffice;
        bool m_hasPlayground;
        bool m_hasPool;
        bool m_hasReadingRoom;
};