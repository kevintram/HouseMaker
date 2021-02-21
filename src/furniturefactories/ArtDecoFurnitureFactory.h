#pragma once

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/Bookshelf.h"
#include "furniture/Closet.h"
#include "furniture/Shower.h"
#include "furniture/Toilet.h"
#include "furniture/Sink.h"

class ArtDecoFurnitureFactory : public FurnitureFactory {
    public:
        inline ArtDecoBookshelf* createBookshelf() {
            return new ArtDecoBookshelf();
        }
        
        inline ArtDecoCloset* createCloset() {
            return new ArtDecoCloset();
        }

        inline ArtDecoShower* createShower() {
            return new ArtDecoShower();
        }

        inline ArtDecoToilet* createToilet() {
            return new ArtDecoToilet();
        }

        inline ArtDecoSink* createSink() {
            return new ArtDecoSink();
        }
};