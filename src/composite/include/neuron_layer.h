#pragma once
#include <vector>

#include "neuron.h"
#include "some_neurons.h"
class Neuron;
class NeuronLayer;
class NeuronLayer : public std::vector<Neuron>,
                    public SomeNeurons<NeuronLayer> {
 public:
  NeuronLayer(int count);
  friend std::ostream& operator<<(std::ostream& os, NeuronLayer& obj);
};
