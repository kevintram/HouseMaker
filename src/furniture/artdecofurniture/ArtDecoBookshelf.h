#pragma once

#include "furniture/Bookshelf.h"

class ArtDecoBookshelf : public Bookshelf {
    public:
        inline ArtDecoBookshelf(string name = "Art Deco Bookshelf"): Bookshelf(name) {}
};