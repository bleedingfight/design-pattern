#ifndef DESIGN_PATTERN_FACTORY_POINT_H
#define DESIGN_PATTERN_FACTORY_POINT_H
#include <cmath>
#include <sstream>
namespace DesignPattern {
class Point {
 private:
  Point(float x, float y) : m_x(x), m_y(y){};
  class PointFactory {
   private:
    PointFactory(){};

   public:
    static Point NewCartesian(float x, float y) { return {x, y}; };
    static Point NewPolar(float t, float r) {
      return {static_cast<float>(r * std::cos(t)),
              static_cast<float>(r * std::sin(t))};
    };
  };

 public:
  float m_x;
  float m_y;
  std::string str() const;
  static PointFactory Factory;
};
}  // namespace DesignPattern
#endif
