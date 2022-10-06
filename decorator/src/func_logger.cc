#include "func_logger.h"
FuncLogger::FuncLogger(const std::function<void()>& func,
                       const std::string& name)
    : func(func), name(name){};
void FuncLogger::operator()() const {
  std::cout << "Entering " << name << "\n";
  func();
  std::cout << "Exiting " << name << "\n";
}
