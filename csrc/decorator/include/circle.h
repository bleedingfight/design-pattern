#pragma once
#include <sstream>

#include "shape.h"
class Circle : public Shape {
  float radius;

 public:
  explicit Circle(const float radius) : radius(radius) {}
  void resize(float factor);
  std::string str() const;
};
