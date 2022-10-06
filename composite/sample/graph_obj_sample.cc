#include "circle.hpp"
#include "group.h"
int main() {
  Group root("root");
  Circle c1, c2;
  root.objects.push_back(&c1);
  Group subgraph("sub");
  subgraph.objects.push_back(&c2);
  root.objects.push_back(&subgraph);
  root.draw();
}
