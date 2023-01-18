#pragma once

#include "ofMain.h"
#include "Fractal.hpp"

class AbstractFractal : public Fractal
{
    // Code
protected:
    string name;
    int levels;
    int x;
    int y;
    vector<ofColor> colors = {};

public:
    AbstractFractal(string name, int x, int y);
    string getName();
    int getLevels();
    void setLevels(int n) { levels = n; }
};