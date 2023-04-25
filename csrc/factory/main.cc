#if FACTORY
#include "SimplePoint.h"
#else
#include "Coffee.h"
#include "DrinkFactory.h"
#include "HotDrink.h"
#include "Point.h"
#include "Tea.h"
#endif
#include <iostream>
#include <memory>
std::unique_ptr<HotDrink> make_drink(std::string type) {
  std::unique_ptr<HotDrink> drink;
  if (type == "tea") {
    drink = std::make_unique<Tea>();
    drink->prepare(200);
  } else {
    drink = std::make_unique<Coffee>();
    drink->prepare(50);
  }
  return drink;
}
int main() {
  std::string type = "Coffee";
  DrinkFactory factory;
  factory.make_drink(type)->prepare(100);
}
