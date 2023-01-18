#include "SierpinskiFractal.hpp"

SierpinskiFractal::SierpinskiFractal(int size) : AbstractFractal("SierpinskiFractal", (ofGetWidth() - size) / 2, ofGetHeight() / 2 - 0.4 * size)
{
    this->size = size;
}
void SierpinskiFractal::draw()
{
    drawHelper(x, y, size, levels);
}
void SierpinskiFractal::drawHelper(float x, float y, float size, int n)
{
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));
    ofDrawTriangle(a, b, c);
    ofSetColor(colors[0]);
    drawHelper((4 * a.x + b.x - a.x) / 4, y + (sqrt(3) * size) / 4, size / 2, n - 1);
    ofSetColor(colors[1]);
    drawHelper(x, y, size / 2, n - 1);
    ofSetColor(colors[2]);
    drawHelper((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
}