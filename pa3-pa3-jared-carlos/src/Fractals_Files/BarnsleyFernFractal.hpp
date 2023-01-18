#pragma once
#include "ofMain.h"
#include "AbstractFractal.hpp"

class BarnsleyFernFractal : public AbstractFractal
{
private:
    /* data */
public:
    BarnsleyFernFractal();
    void draw();
    void drawHelper(float x, float y, float n);
};
