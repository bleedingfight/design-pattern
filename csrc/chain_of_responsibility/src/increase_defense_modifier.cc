#include "increase_defense_modifier.h"
IncreaseDefenseModifier::IncreaseDefenseModifier(
    std::shared_ptr<SimpleCreature>& creature)
    : CreatureModifier(creature) {}
void IncreaseDefenseModifier::handle() {
  if (creature->getAttach() <= 2)
    creature->setDefense(creature->getDefense() + 1);
  std::cout << "Add Defense for defense<=2\n";
  CreatureModifier::handle();
}
