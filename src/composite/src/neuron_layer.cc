#include "neuron_layer.h"
NeuronLayer::NeuronLayer(int count) {
  while (count-- > 0) emplace_back(Neuron{});
}
std::ostream& operator<<(std::ostream& os, NeuronLayer& obj) {
  for (auto& n : obj) os << n;
  return os;
}
