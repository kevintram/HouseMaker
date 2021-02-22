#pragma once

#include "AbstractHouseBuilder.h"

class HouseBuilder : public AbstractHouseBuilder {
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