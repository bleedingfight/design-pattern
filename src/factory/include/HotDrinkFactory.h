#pragma once
#include <iostream>
#include <memory>
#include <string>

#include "HotDrink.h"
class HotDrinkFactory {
 public:
  virtual std::unique_ptr<HotDrink> make() const = 0;
  virtual ~HotDrinkFactory() = 0;
};
