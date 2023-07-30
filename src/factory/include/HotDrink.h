#pragma once
#include <iostream>
class HotDrink {
 public:
  virtual void prepare(int valumn) = 0;
  virtual ~HotDrink() = default;
};
