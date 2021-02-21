#pragma once 

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/Bookshelf.h"
#include "furniture/Closet.h"
#include "furniture/Shower.h"
#include "furniture/Sink.h"
#include "furniture/Toilet.h"

class ModernFurnitureFactory : public FurnitureFactory {
    public: 
        inline ModernBookshelf* createBookshelf() {
            return new ModernBookshelf();
        }
        
        inline ModernCloset* createCloset() {
            return new ModernCloset();
        }

        inline ModernShower* createShower() {
            return new ModernShower();
        }

        inline ModernSink* createSink() {
            return new ModernSink();
        }

        inline ModernToilet* createToilet() {
            return new ModernToilet();
        }
};