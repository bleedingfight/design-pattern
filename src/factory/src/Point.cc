#include "Point.h"
namespace DesignPattern {
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
}  // namespace DesignPattern
