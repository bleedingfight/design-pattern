#include "SimplePoint.h"
Point::Point(float x, float y) : m_x(x), m_y(y){};
Point Point::NewPolar(float t, float r) {
  return Point(r * cos(t), r * sin(t));
};
Point Point::NewCartesian(float x, float y) { return Point(x, y); };
std::string Point::str() const {
  auto f = [](float data) -> std::string {
    std::stringstream ss;
    ss << data;
    std::string data_str;
    ss >> data_str;
    return data_str;
  };
  auto f_str =
      std::string("x = ") + f(m_x) + std::string(" y = ") + f(m_y) + "\n";
  return f_str;
}
