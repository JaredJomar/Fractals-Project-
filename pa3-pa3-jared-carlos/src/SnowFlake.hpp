#pragma once

#include "ofMain.h"
#include <cmath>
// Code
#include "AbstractFractal.hpp"

/**
 * @brief Koch SnowFlake Fractal
 *
 */
// Code
class SnowFlake : public AbstractFractal
{
private:
  glm::vec2 start;
  glm::vec2 end;
  // Code
  ofColor color;
  // Code
  int n = 1;

public:
  SnowFlake();
  // Code
  SnowFlake(glm::vec2 start, glm::vec2 end, ofColor color);

  glm::vec2 getStart() const { return start; }
  glm::vec2 getEnd() const { return end; }
  // Code
  int getSnow() { return n; }
  void setStart(glm::vec2 start) { this->start = start; }
  void setEnd(glm::vec2 end) { this->end = end; }
  // Code
  void setSnow(int n) { this->n = n; }

  void draw();
  void draw(int n, SnowFlake *flake);

  glm::vec2 getA();
  glm::vec2 getB();
  glm::vec2 getC();
  glm::vec2 getD();
  glm::vec2 getE();
};