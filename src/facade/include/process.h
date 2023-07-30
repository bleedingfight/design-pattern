#pragma once
#include <memory>

#include "business.h"
#include "logistics.h"
#include "platform.h"
class Process {
 private:
  std::shared_ptr<Business> m_b;
  std::shared_ptr<Platform> m_p;
  std::shared_ptr<Logistics> m_l;

 public:
  void makeProcess();
  virtual void process() = 0;
  std::shared_ptr<Business>& getBusiness();
  std::shared_ptr<Platform>& getPlatform();
  std::shared_ptr<Logistics>& getLogistics();
};
