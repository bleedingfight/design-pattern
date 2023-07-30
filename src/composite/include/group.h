#pragma once
#include <string>
#include <vector>

#include "graph_object.h"
class Group : public GraphicObject {
 private:
  std::string name;

 public:
  std::vector<GraphicObject*> objects;
  explicit Group(const std::string& name) : name(name){};
  void draw() override {
    std::cout << "Group " << name << " contain:" << std::endl;
    for (auto&& o : objects) o->draw();
  }
};
