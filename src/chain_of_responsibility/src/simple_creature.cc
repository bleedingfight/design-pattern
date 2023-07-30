#include "simple_creature.h"
SimpleCreature::SimpleCreature(const std::string& name)
    : name(name), attach(0), defense(0) {}
SimpleCreature::SimpleCreature(const std::string& name, const int attach,
                               const int defense)
    : name(name), attach(attach), defense(defense) {}
void SimpleCreature::setAttach(const int attach) { this->attach = attach; }
void SimpleCreature::setDefense(const int defense) { this->defense = defense; }
int SimpleCreature::getAttach() { return attach; }
int SimpleCreature::getDefense() { return defense; }
std::string SimpleCreature::getName() const { return name; }
