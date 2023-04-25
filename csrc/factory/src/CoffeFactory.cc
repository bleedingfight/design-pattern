#include "Coffee.h"
#include "CoffeeFactory.h"
std::unique_ptr<HotDrink> CoffeeFactory::make() const {
  return std::make_unique<Coffee>();
}
