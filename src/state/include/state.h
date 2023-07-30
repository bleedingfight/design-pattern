#pragma once
#include "light_switch.h"
#include <iostream>
class LightSwitch;
class State {
public:
  virtual void on(LightSwitch *ls) { std::cout << "Current State is On\n"; };
  virtual void off(LightSwitch *ls) { std::cout << "Current State is Off\n"; };
};
