#pragma once

#include "furniture/Closet.h"
#include <string>

class ArtDecoCloset : public Closet {
    public: 
        inline ArtDecoCloset(string name = "Art Deco Closet") : Closet(name) {}
};