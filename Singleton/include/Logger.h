#pragma once
#include "Singleton.h"
class Logger : public Singleton<Logger> {
 public:
  static void show();
};
