#pragma once
#include <sstream>
#include <string>

template <typename T>
class STransparentShape : public T {
  uint8_t transparency;

 public:
  template <typename... Args>
  STransparentShape(const uint8_t transparency, Args... args)
      : T(std::forward<Args>(args)...), transparency{transparency} {}
  std::string str() const override {
    std::ostringstream oss;
    oss << T::str() << " has "
        << static_cast<float>(transparency) / 255.f * 100.f
        << " % transparency";
    return oss.str();
  }
};
