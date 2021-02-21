#pragma once

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/Bookshelf.h"
#include "furniture/Closet.h"

class ArtDecoFurnitureFactory : public FurnitureFactory {
    public:
        inline ArtDecoBookshelf* createBookshelf() {
            return new ArtDecoBookshelf();
        }
        
        inline ArtDecoCloset* createCloset() {
            return new ArtDecoCloset();
        }
};