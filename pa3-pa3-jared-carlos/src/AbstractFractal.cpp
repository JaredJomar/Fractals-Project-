#include "AbstractFractal.hpp"
// Code
AbstractFractal::AbstractFractal(string name, int x, int y) : Fractal()
{
    this->name = name;
    this->x = x;
    this->y = y;
    this->levels = 1;
    for (int i = 0; i < 15; i++)
        colors.push_back(ofColor(ofRandom(255), ofRandom(255), ofRandom(255)));
}

string AbstractFractal::getName() { return name; }

int AbstractFractal::getLevels() { return levels; }
