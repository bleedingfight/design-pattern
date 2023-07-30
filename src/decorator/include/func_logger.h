#pragma once
#include <functional>
#include <iostream>
#include <string>
class FuncLogger {
  std::function<void()> func;
  std::string name;

 public:
  FuncLogger(const std::function<void()>& func, const std::string& name);
  void operator()() const;
};
