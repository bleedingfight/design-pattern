#pragma  once
#include "state.h"
#include "light_switch.h"
#include <iostream>
class LightSwitch;
class OffState:public State{
    public:
    OffState();
    void off(LightSwitch*ls) override;
};