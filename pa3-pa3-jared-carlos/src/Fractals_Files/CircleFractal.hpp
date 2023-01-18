#pragma once
#include "ofMain.h"
#include "AbstractFractal.hpp"

class CircleFractal : public AbstractFractal{
    private:
        /* data */
        float r;
        float angle;
    public:
        CircleFractal(int r);
        void draw();
        void drawHelper(float x, float y, float r, int n);
        
};
