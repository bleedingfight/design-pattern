#include "csrc/state/include/light_switch.h"
#include "csrc/state/include/off_state.h"
#include "csrc/state/include/on_state.h"
#include <gtest/gtest.h>
#include <iostream>
using namespace std;
TEST(StateCommon, StateSuits) {
  LightSwitch ls;
  ls.on();
  ls.off();
}
