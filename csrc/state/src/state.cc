#include "state.h"
void State::on(LightSwitch *ls) { std::cout << "Current State is On\n"; }
void State::off(LightSwitch *ls) { std::cout << "Current State is Off\n"; }
