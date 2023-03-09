#include "light_switch.h"
LightSwitch::LightSwitch(){state = new OffState();}
void LightSwitch::on(){
    state->on(this);
}
void LightSwitch::off(){
     state->off(this);
}
