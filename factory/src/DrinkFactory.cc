#include "DrinkFactory.h"
DrinkFactory::DrinkFactory() {
  hot_factories["Coffee"] = std::make_unique<CoffeeFactory>();
  hot_factories["Tea"] = std::make_unique<TeaFactory>();
}
std::unique_ptr<HotDrink> DrinkFactory::make_drink(const std::string& name) {
  auto drink = hot_factories[name]->make();
  drink->prepare(100);
  return drink;
}
