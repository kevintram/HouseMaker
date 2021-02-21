#pragma once

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/artdecofurniture/ArtDecoBookshelf.h"
#include "furniture/artdecofurniture/ArtDecoCloset.h"

class ArtDecoFurnitureFactory : public FurnitureFactory {
    public:
        inline ArtDecoBookshelf* createBookshelf() {
            return new ArtDecoBookshelf();
        }
        
        inline ArtDecoCloset* createCloset() {
            return new ArtDecoCloset();
        }
};