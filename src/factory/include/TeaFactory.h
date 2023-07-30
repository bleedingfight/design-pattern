#pragma once
#include "HotDrinkFactory.h"
#include "Tea.h"
class TeaFactory : public HotDrinkFactory {
  std::unique_ptr<HotDrink> make() const override;
};
