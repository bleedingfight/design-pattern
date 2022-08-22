#if FACTORY
#include "SimplePoint.h"
#else
#include "Coffee.h"
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

// std::unique_ptr<HotDrink> make_drink(std::string& type) {
//   std::unique_ptr<HotDrink> drink;
//   if (type == "Tea") {
//     drink = std::make_unique<Tea>();
//     drink->prepare(100);
//   } else {
//     drink = std::make_unique<Coffe>();
//     drink->prepare(200);
//   }
//   return drink;
// }
int main() {
  std::string type = "coffe";
  auto p = make_drink(type);
}
