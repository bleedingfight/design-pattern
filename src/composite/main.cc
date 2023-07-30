#include "neuron.h"
#include "neuron_layer.h"
int main() {
  Neuron n1, n2;
  n1.connect_to(n2);
  std::cout << n1 << n2 << "\n";
  NeuronLayer l1{5};
  Neuron n3;
  l1.connect_to(n3);
  std::cout << "Neoron " << n3.id << "\n" << n3 << std::endl;
  std::cout << "Layer "
            << "\n"
            << l1 << "\n";
  NeuronLayer l2{2}, l3{3};
  l2.connect_to(l3);
  std::cout << "Layer l2"
            << "\n"
            << l2;
  std::cout << "Layer l3"
            << "\n"
            << l3;
}
