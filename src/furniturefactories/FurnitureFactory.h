#pragma once

#include "furniture/Closet.h"
#include "furniture/Bookshelf.h"
#include "furniture/Shower.h"
#include "furniture/Sink.h"
#include "furniture/Toilet.h"

class FurnitureFactory {
    public: 
        virtual Closet* createCloset() = 0;
        virtual Bookshelf* createBookshelf() = 0;
        virtual Shower* createShower() = 0;
        virtual Sink* createSink() = 0;
        virtual Toilet* createToilet() = 0;
};