#pragma once

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/artdecofurniture/ArtDecoBookshelf.h"
#include "furniture/artdecofurniture/ArtDecoCloset.h"

class ArtDecoFurnitureFactory : public FurnitureFactory {
    public:
        ArtDecoBookshelf* createBookshelf();
        ArtDecoCloset* createCloset();
};