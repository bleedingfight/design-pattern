#include <iostream>

#include "creature_modifier.h"
#include "double_attach_modifier.h"
#include "increase_defense_modifier.h"
#include "no_bonuses_modifier.h"
#include "simple_creature.h"

int main() {
  std::shared_ptr<SimpleCreature> goblin =
      std::make_shared<SimpleCreature>("Goblin", 1, 1);
  CreatureModifier root{goblin};
  std::cout << *goblin << "\n";
  DoubleAttachModifier r1{goblin};
  DoubleAttachModifier r12{goblin};
  IncreaseDefenseModifier r2{goblin};
  NoBonusesModifier r0{goblin};

  root.add(&r0);
  root.add(&r1);
  root.add(&r2);
  root.add(&r12);
  root.handle();
  std::cout << *goblin << "\n";
}
