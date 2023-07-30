#pragma once
#include <iostream>
#include <string>
class Font {
 private:
  std::string key;

 public:
  Font(const std::string& key);
  std::string getKey() const;
  friend std::ostream& operator<<(std::ostream& os, Font f) {
    os << "Current Font name = " << f.getKey();
    return os;
  }
};
