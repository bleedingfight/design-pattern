#include "double_attach_modifier.h"
DoubleAttachModifier::DoubleAttachModifier(
    std::shared_ptr<SimpleCreature>& creature)
    : CreatureModifier(creature){};
void DoubleAttachModifier::handle() {
  creature->setAttach(creature->getAttach() * 2);
  std::cout << "Double Attach\n";
  CreatureModifier::handle();
}
