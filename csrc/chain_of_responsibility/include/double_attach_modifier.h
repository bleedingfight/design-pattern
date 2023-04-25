#pragma once
#include "creature_modifier.h"
class DoubleAttachModifier : public CreatureModifier {
 public:
  explicit DoubleAttachModifier(std::shared_ptr<SimpleCreature>& creature);
  void handle() override;
};
