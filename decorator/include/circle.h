#pragma once
#include <sstream>

#include "shape.h"
class Circle : public Shape {
 public:
  float radius;
  explicit Circle(const float radius) : radius(radius) {}
  void resize(float factor);
  std::string str() const;
};
