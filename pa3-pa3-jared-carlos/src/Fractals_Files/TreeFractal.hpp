#pragma once
#include "ofMain.h"
#include "AbstractFractal.hpp"

class TreeFractal : public AbstractFractal{
    private:
        /* data */
        float length;
    public:
        TreeFractal();
        void draw();
        void drawTree(float x, float y, int n, float length, float rad);
        
};
