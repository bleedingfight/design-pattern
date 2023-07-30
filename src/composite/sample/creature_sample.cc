#include <iostream>
#ifdef SIMPLE
#include "simple_creature.hpp"
#else
#include "creature.hpp"
#endif
int main() {
#if SIMPLE
  SimpleCreature sc;
  sc.set_strength(2);
  sc.set_agility(4);
  sc.set_intelligence(5);
  std::cout << "Bad " << sc.sum() << "\n";
#else
  Creature c;
  c.set_strength(2);
  c.set_agility(4);
  c.set_intelligence(5);
  std::cout << "Good " << c.sum() << "\n";
#endif
}
