#include "TreeFractal.hpp"

TreeFractal::TreeFractal() : AbstractFractal("TreeFractal", ofGetWidth() / 2, ofGetHeight() - 20)
{
    length = 0.31 * ofGetHeight();
}

void TreeFractal::draw()
{
    float length2 = length / 2;
    drawTree(x, y, levels, length, 1.5 * PI);
    drawTree(x - 300, y + 170, levels, length2, 1.5 * PI);
    drawTree(x + 300, y + 170, levels, length2, 1.5 * PI);
}

void TreeFractal::drawTree(float x, float y, int n, float length, float rad)
{
    if (n == 0)
        return;

    float x2 = x + length * cos(rad);
    float y2 = y + length * sin(rad);
    ofSetColor(colors[n]);
    ofDrawLine(x, y, x2, y2);

    drawTree(x2, y2, n - 1, 0.7 * length, rad + 0.2 * PI);
    drawTree(x2, y2, n - 1, 0.7 * length, rad - 0.2 * PI);
}