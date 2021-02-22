#pragma once

#include "furniturefactories/FurnitureFactory.h"
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

/**
 * A furniture factory for only producing Art Deco style furniture.
 */
class ArtDecoFurnitureFactory : public FurnitureFactory {
    public:
        inline ArtDecoBed* createBed() {
            return new ArtDecoBed();
        }

        inline ArtDecoBookshelf* createBookshelf() {
            return new ArtDecoBookshelf();
        }

        inline ArtDecoChair* createChair() {
            return new ArtDecoChair();
        }
        
        inline ArtDecoCloset* createCloset() {
            return new ArtDecoCloset();
        }

        inline ArtDecoCoffeeTable* createCoffeeTable() {
            return new ArtDecoCoffeeTable();
        }

        inline ArtDecoCounter* createCounter() {
            return new ArtDecoCounter();
        }

        inline ArtDecoDesk* createDesk() {
            return new ArtDecoDesk();
        }

        inline ArtDecoOfficeChair* createOfficeChair() {
            return new ArtDecoOfficeChair();
        }

        inline ArtDecoOven* createOven() {
            return new ArtDecoOven();
        }

        inline ArtDecoShower* createShower() {
            return new ArtDecoShower();
        }

        inline ArtDecoSink* createSink() {
            return new ArtDecoSink();
        }
        
        inline ArtDecoSofa* createSofa() {
            return new ArtDecoSofa();
        }

        inline ArtDecoStove* createStove() {
            return new ArtDecoStove();
        }

        inline ArtDecoToilet* createToilet() {
            return new ArtDecoToilet();
        }

        inline ArtDecoTV* createTV() {
            return new ArtDecoTV();
        }
};