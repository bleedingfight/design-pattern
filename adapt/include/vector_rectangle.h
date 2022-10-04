#pragma once
#include "vector_object.h"
struct VectorRectangle : VectorObject {
  VectorRectangle(int x, int y, int width, int height);
  std::vector<Line>::iterator begin() override { return lines.begin(); }
  std::vector<Line>::iterator end() override { return lines.end(); }

 private:
  std::vector<Line> lines;
};
