#pragma once
#include "light_switch.h"
#include <iostream>
class OnState : public State {
public:
  OnState();
  void on(LightSwitch *ls) override;
};
