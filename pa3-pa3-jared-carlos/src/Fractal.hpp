#pragma once

#include "ofMain.h"

class Fractal
{
public:
    // Code
    virtual void draw() = 0;
    virtual string getName() = 0;
    virtual int getLevels() = 0;
};