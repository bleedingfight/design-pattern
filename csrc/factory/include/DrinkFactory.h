#pragma once
#include <map>
#include <memory>
#include <string>

#include "CoffeeFactory.h"
#include "HotDrink.h"
#include "HotDrinkFactory.h"
#include "Tea.h"
#include "TeaFactory.h"
class DrinkFactory {
 private:
  std::map<std::string, std::unique_ptr<HotDrinkFactory>> hot_factories;

 public:
  DrinkFactory();
  std::unique_ptr<HotDrink> make_drink(const std::string& name);
};
