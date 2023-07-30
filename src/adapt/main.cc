#include <memory>

#include "line_to_point_adapter.h"
#include "utils.hpp"
#include "vector_rectangle.h"
int main() {
  VectorRectangle rect = {0, 0, 2, 3};
  std::vector<std::shared_ptr<VectorObject>> vectorObjects{
      std::make_shared<VectorRectangle>(0, 0, 10, 10),
      std::make_shared<VectorRectangle>(0, 0, 3, 3)};
  for (auto &obj : vectorObjects) {
    for (auto &line : *obj) {
      LineToPointAdapter lpo{line};
      DrawPoints(lpo.begin(), lpo.end(), lpo.elems, lpo.elems);
    }
  }
}
