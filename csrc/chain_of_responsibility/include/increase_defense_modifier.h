#pragma once
#include <memory>

#include "creature_modifier.h"
#include "simple_creature.h"
class IncreaseDefenseModifier : public CreatureModifier {
 public:
  explicit IncreaseDefenseModifier(std::shared_ptr<SimpleCreature>& creature);
  void handle() override;
};
