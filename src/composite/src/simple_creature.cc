#include "simple_creature.hpp"
int SimpleCreature::get_strength() const { return strength; }
void SimpleCreature::set_strength(int strength) {
  SimpleCreature::strength = strength;
}
int SimpleCreature::sum() const { return strength + agility + intelligence; }
double SimpleCreature::average() const { return sum() / 3.0; }
int SimpleCreature::max() const {
  return std::max(std::max(strength, agility), intelligence);
}
void SimpleCreature::set_agility(int agility) {
  SimpleCreature::agility = agility;
}
void SimpleCreature::set_intelligence(int intelligence) {
  SimpleCreature::intelligence = intelligence;
}
