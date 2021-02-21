#pragma once 

#include "furniturefactories/FurnitureFactory.h"
#include "furniture/modernfurniture/ModernBookshelf.h"
#include "furniture/modernfurniture/ModernCloset.h"

class ModernFurnitureFactory : public FurnitureFactory {
    public: 
        inline ModernBookshelf* createBookshelf() {
            return new ModernBookshelf();
        }
        
        inline ModernCloset* createCloset() {
            return new ModernCloset();
        }
};