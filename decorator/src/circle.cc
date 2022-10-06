#include "circle.h"
void Circle::resize(float factor) { radius *= factor; }
std::string Circle::str() const {
  std::ostringstream oss;
  oss << "A circle of radius " << radius;
  return oss.str();
}
