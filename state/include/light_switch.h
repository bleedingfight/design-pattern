#pragma once
#include "state.h"
#include "off_state.h"
class State;
class LightSwitch{
  State *state;
  public:
  LightSwitch();
  void set_state(State* state);
  void on();
  void off();
};
