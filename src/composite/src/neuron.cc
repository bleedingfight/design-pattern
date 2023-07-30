#include "neuron.h"
class Neuron;
Neuron::Neuron() {
  static int id = 1;
  this->id = id++;
}

Neuron* Neuron::begin() { return this; }
Neuron* Neuron::end() { return this + 1; }
