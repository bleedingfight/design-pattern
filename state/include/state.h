#pragma once
#include "light_switch.h"
class LightSwitch;
class State{
public:
    virtual void on(LightSwitch*ls);
    virtual void off(LightSwitch* ls);
};
