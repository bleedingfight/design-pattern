#pragma once
#include <sstream>
#include <string>
#include <type_traits>

#include "shape.h"
template <typename T>
class SColoredShape : public T {
  static_assert(std::is_base_of<Shape, T>::value,
                "Template argument must be Shape");
  std::string color;

 public:
  SColoredShape(){};
  template <typename... Args>
  SColoredShape(const std::string& color, Args... args)
      : T(std::forward<Args>(args)...), color{color} {};
  std::string str() const override {
    std::ostringstream oss;
    oss << T::str() << " has the color " << color;
    return oss.str();
  }
};
