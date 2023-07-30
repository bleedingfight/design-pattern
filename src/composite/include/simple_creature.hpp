#pragma once
#include <cmath>
class SimpleCreature {
  int strength, agility, intelligence;

 public:
  int get_strength() const;
  void set_strength(int strength);
  void set_agility(int agility);
  void set_intelligence(int intelligence);
  int sum() const;
  double average() const;
  int max() const;
};
