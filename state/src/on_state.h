#pragma once
#include <iostream>
#include "state.h"
class OnState:public State{
    public:
        OnState();
        void off(LightSwitch*ls) override;
};
