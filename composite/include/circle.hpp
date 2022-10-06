#pragma once
#include <iostream>

#include "graph_object.h"
class Circle : public GraphicObject {
 public:
  void draw() override { std::cout << "Circle" << std::endl; }
};
