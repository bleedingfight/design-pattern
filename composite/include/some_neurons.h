#pragma once
#include "neuron.h"
class Neuron;
template <typename Self>
class SomeNeurons {
 public:
  template <typename T>
  void connect_to(T& other) {
    for (Neuron& from : *static_cast<Self*>(this)) {
      for (Neuron& to : other) {
        from.out.push_back(&to);
        to.in.push_back(&from);
      }
    }
  }
};
