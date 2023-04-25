#pragma once
#include <cmath>
#include <sstream>
class Point {
 private:
  float m_x;
  float m_y;
  Point(float x, float y);

 public:
  static Point NewPolar(float t, float r);
  static Point NewCartesian(float x, float y);
  std::string str() const;
};
