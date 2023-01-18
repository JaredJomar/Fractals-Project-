#pragma once
#include "ofMain.h"
#include "AbstractFractal.hpp"

class SierpinskiFractal : public AbstractFractal{
    private:
        /* data */
        float size;
    public:
        SierpinskiFractal(int size);
        void draw();
        void drawHelper(float x, float y, float size, int n);
};
