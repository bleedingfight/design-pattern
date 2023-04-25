#pragma once
#include "property.h"
class Creature {
 public:
  Property<int> strength{10};
  Property<int> agility{5};
};
