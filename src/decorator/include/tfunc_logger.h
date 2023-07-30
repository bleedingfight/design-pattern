#pragma once
#include <iostream>
#include <string>
template <typename Func>
class TfuncLogger {
  Func func;
  std::string name;

 public:
  TfuncLogger(const Func& func, const std::string& name)
      : func{func}, name{name} {}
  void operator()() const {
    std::cout << "Entering " << name << "\n";
    func();
    std::cout << "Exiting " << name << "\n";
  }
};
template <typename Func>
auto make_tfunc_logger(Func func, const std::string& name) {
  return TfuncLogger<Func>(func, name);
}
