#include "furniturefactories/ArtDecoFurnitureFactory.h"

ArtDecoCloset* ArtDecoFurnitureFactory::createCloset() {
    return new ArtDecoCloset();
}

ArtDecoBookshelf* ArtDecoFurnitureFactory::createBookshelf() {
    return new ArtDecoBookshelf();
}