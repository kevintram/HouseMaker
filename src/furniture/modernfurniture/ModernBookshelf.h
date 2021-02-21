#pragma once

#include "furniture/Bookshelf.h"

class ModernBookshelf : public Bookshelf {
    public:
        inline ModernBookshelf(string name = "Modern Bookshelf") : Bookshelf(name) {}
};