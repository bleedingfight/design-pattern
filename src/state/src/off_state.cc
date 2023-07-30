#include "off_state.h"
OffState::OffState() { std::cout << "Light tured on\n"; }
void OffState::off(LightSwitch *ls) {
  std::cout << "Switching light on\n";
  ls->set_state(new OffState());
  delete this;
}
