#pragma once
template <typename T>
class Singleton {
 public:
  static T& getInstance();
  Singleton(const Singleton& other) = delete;
  Singleton& operator()(const Singleton& other) = delete;

 protected:
  Singleton() = default;
  ~Singleton() = default;
};
