#include "HotDrinkFactory.h"
class CoffeeFactory : public HotDrinkFactory {
  std::unique_ptr<HotDrink> make() const override;
};
