#pragma once
#include <iostream>
#include <string>
class SimpleCreature {
  std::string name;
  int attach, defense;

 public:
  void setAttach(const int attach);
  void setDefense(const int defense);
  int getAttach();
  int getDefense();
  std::string getName() const;
  SimpleCreature(const std::string& name);
  SimpleCreature(const std::string& name, const int attach, const int defense);
  friend std::ostream& operator<<(std::ostream& os, SimpleCreature& sc) {
    std::cout << "Name:" << sc.getName() << "Attach:" << sc.getAttach()
              << " Defense:" << sc.getDefense() << "\n";
    return os;
  };
};
