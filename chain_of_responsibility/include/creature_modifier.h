#pragma once
#include <memory>

#include "simple_creature.h"
class CreatureModifier {
  CreatureModifier* next{nullptr};

 protected:
  std::shared_ptr<SimpleCreature> creature;

 public:
  explicit CreatureModifier(std::shared_ptr<SimpleCreature>& creature);
  void add(CreatureModifier* cm);
  virtual void handle();
};
