#pragma once

#include "furniture/Bed.h"
#include "furniture/Bookshelf.h"
#include "furniture/Chair.h"
#include "furniture/Closet.h"
#include "furniture/CoffeeTable.h"
#include "furniture/Counter.h"
#include "furniture/Desk.h"
#include "furniture/OfficeChair.h"
#include "furniture/Oven.h"
#include "furniture/Shower.h"
#include "furniture/Sink.h"
#include "furniture/Sofa.h"
#include "furniture/Stove.h"
#include "furniture/Toilet.h"
#include "furniture/TV.h"


class FurnitureFactory {
    public: 
        virtual Bed* createBed() = 0;
        virtual Bookshelf* createBookshelf() = 0;
        virtual Chair* createChair() = 0;
        virtual Closet* createCloset() = 0;
        virtual CoffeeTable* createCoffeeTable() = 0;
        virtual Counter* createCounter() = 0;
        virtual Desk* createDesk() = 0;
        virtual OfficeChair* createOfficeChair() = 0;
        virtual Oven* createOven() = 0;
        virtual Shower* createShower() = 0;
        virtual Sink* createSink() = 0;
        virtual Sofa* createSofa() = 0;
        virtual Stove* createStove() = 0;
        virtual Toilet* createToilet() = 0;
        virtual TV* createTV() = 0;
};