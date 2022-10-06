#pragma once
#include <sstream>

#include "shape.h"
class ColoredShape : public Shape {
  Shape& shape;
  std::string color;

 public:
  ColoredShape(Shape& shape, const std::string& color);
  std::string str() const override;
};
