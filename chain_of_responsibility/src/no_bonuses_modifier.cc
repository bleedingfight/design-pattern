#include "no_bonuses_modifier.h"
NoBonusesModifier::NoBonusesModifier(std::shared_ptr<SimpleCreature>& creature)
    : CreatureModifier(creature) {}
void NoBonusesModifier::handle() {}
