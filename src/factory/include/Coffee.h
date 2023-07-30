#pragma once
#include "HotDrink.h"
class Coffee : public HotDrink {
 public:
  void prepare(int volumn) override {
    std::cout << "Coffee make cost " << volumn << " s\n";
  }
};
