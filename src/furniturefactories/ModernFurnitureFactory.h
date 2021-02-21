#pragma once 

#include "furniturefactories/FurnitureFactory.h"
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

class ModernFurnitureFactory : public FurnitureFactory {
    public: 
        inline ModernBookshelf* createBookshelf() {
            return new ModernBookshelf();
        }

        inline ModernChair* createChair() {
            return new ModernChair();
        }
        
        inline ModernCloset* createCloset() {
            return new ModernCloset();
        }

        inline ModernCoffeeTable* createCoffeeTable() {
            return new ModernCoffeeTable();
        }

        inline ModernCounter* createCounter() {
            return new ModernCounter();
        }

        inline ModernDesk* createDesk() {
            return new ModernDesk();
        }

        inline ModernOfficeChair* createOfficeChair() {
            return new ModernOfficeChair();
        }

        inline ModernOven* createOven() {
            return new ModernOven();
        }

        inline ModernShower* createShower() {
            return new ModernShower();
        }

        inline ModernSink* createSink() {
            return new ModernSink();
        }
        
        inline ModernSofa* createSofa() {
            return new ModernSofa();
        }

        inline ModernStove* createStove() {
            return new ModernStove();
        }

        inline ModernToilet* createToilet() {
            return new ModernToilet();
        }

        inline ModernTV* createTV() {
            return new ModernTV();
        }
};
