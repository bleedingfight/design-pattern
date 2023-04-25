#pragma once
#include "off_state.h"
#include "state.h"
class State;
class LightSwitch {
  State *state;

public:
  LightSwitch();
  void set_state(State *state);
  void on();
  void off();
};
