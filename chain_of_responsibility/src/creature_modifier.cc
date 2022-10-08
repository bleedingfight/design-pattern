#include "creature_modifier.h"
CreatureModifier::CreatureModifier(std::shared_ptr<SimpleCreature>& creature)
    : creature(creature) {}
void CreatureModifier::add(CreatureModifier* cm) {
  if (next)
    next->add(cm);
  else
    next = cm;
}
void CreatureModifier::handle() {
  if (next) next->handle();
}
