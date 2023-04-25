#pragma once
#include <iostream>
#include <vector>

#include "some_neurons.h"
class Neuron;
class Neuron : public SomeNeurons<Neuron> {
 public:
  unsigned int id;
  std::vector<Neuron*> in, out;
  Neuron();
  Neuron* begin();
  Neuron* end();
  friend std::ostream& operator<<(std::ostream& os, const Neuron& obj) {
    for (Neuron* n : obj.in)
      os << n->id << "\t-->\t" << obj.id << "]"
         << "\n";
    for (Neuron* n : obj.out) {
      os << "[" << obj.id << "]\t-->\t" << n->id << "\n";
    }
    return os;
  };
};
