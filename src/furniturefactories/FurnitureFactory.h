#pragma once

#include "furniture/Closet.h"
#include "furniture/Bookshelf.h"

class FurnitureFactory {
    public: 
        virtual Closet* createCloset() = 0;
        virtual Bookshelf* createBookshelf() = 0;
};