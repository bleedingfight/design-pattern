#include "creature.hpp"
int Creature::sum() const {
  return std::accumulate(abilities.begin(), abilities.end(), 0);
}
int Creature::get_strength() const { return abilities[str]; }
void Creature::set_strength(int value) { abilities[str] = value; }
double Creature::average() const { return sum() / static_cast<double>(count); }
int Creature::max() const {
  return *std::max_element(abilities.begin(), abilities.end());
}
void Creature::set_agility(int value) { abilities[agl] = value; }
void Creature::set_intelligence(int value) { abilities[intl] = value; }
