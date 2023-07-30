#include "light_switch.h"
class LightSwitch {
  State *state;

public:
  LightSwitch() { state = new OffState(); }
  void set_state(State *state) { this->state = state; }
  void on() { state->on(this); }
  void off() { state->off(this); }
};
