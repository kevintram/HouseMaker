#pragma once 

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/Bookshelf.h"
#include "furniture/Closet.h"

class ModernFurnitureFactory : public FurnitureFactory {
    public: 
        inline ModernBookshelf* createBookshelf() {
            return new ModernBookshelf();
        }
        
        inline ModernCloset* createCloset() {
            return new ModernCloset();
        }
};