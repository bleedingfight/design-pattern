#pragma once
template <typename T>
class Property {
  T value;

 public:
  Property(const T initial_value) { *this = initial_value; }
  operator T() { return value; }
  T operator=(T new_value) { return value = new_value; }
};
