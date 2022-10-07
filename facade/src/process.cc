#include "process.h"
void Process::makeProcess() {
  m_b = std::make_shared<Business>();
  m_p = std::make_shared<Platform>();
  m_l = std::make_shared<Logistics>();
};

std::shared_ptr<Business>& Process::getBusiness() { return m_b; };

std::shared_ptr<Platform>& Process::getPlatform() { return m_p; };
std::shared_ptr<Logistics>& Process::getLogistics() { return m_l; };
