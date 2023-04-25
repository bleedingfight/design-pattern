#pragma once
#include <functional>
#include <iostream>
#include <string>
template <typename T>
class FuncRlogger;
template <typename R, typename... Args>
class FuncRlogger<R(Args...)> {
  std::function<R(Args...)> func;
  std::string name;

 public:
  FuncRlogger(std::function<R(Args...)> func, const std::string& name)
      : func{func}, name{name} {};
  R operator()(Args... args) {
    std::cout << "Entering " << name << "\n";
    R result = func(args...);
    std::cout << "Exiting " << name << "\n";
    return result;
  }
};
template <typename R, typename... Args>
auto make_funcr_logger(R (*func)(Args...), const std::string& name) {
  return FuncRlogger<R(Args...)>(std::function<R(Args...)>(func), name);
}
