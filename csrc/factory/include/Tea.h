#pragma once
#include "HotDrink.h"
class Tea : public HotDrink {
 public:
  void prepare(int volumn) override {
    std::cout << "Tea make cost " << volumn << " s"
              << "\n";
  }
};
