#pragma once
#include "creature_modifier.h"
class NoBonusesModifier : public CreatureModifier {
 public:
  explicit NoBonusesModifier(std::shared_ptr<SimpleCreature>& creature);
  void handle() override;
};
