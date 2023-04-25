#pragma once
#include <algorithm>
#include <array>
#include <numeric>
class Creature {
  enum Abilities { str, agl, intl, count };
  std::array<int, count> abilities;

 public:
  int sum() const;
  int get_strength() const;
  void set_strength(int value);
  void set_agility(int value);
  void set_intelligence(int value);
  double average() const;
  int max() const;
};
