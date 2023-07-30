#pragma once
#include <memory>

#include "business.h"
#include "logistics.h"
#include "platform.h"
#include "process.h"
class Client : public Process {
 public:
  void process() override;
  void order();
};
