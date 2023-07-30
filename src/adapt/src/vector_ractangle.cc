#include "vector_rectangle.h"
VectorRectangle::VectorRectangle(int x, int y, int width, int height) {
  lines.emplace_back(Line{Pointer{x, y}, Pointer{x + width, y}});
  lines.emplace_back(
      Line{Pointer{x + width, y}, Pointer{x + width, y + height}});
  lines.emplace_back(
      Line{Pointer{x + width, y + height}, Pointer{x, y + height}});
  lines.emplace_back(Line{Pointer{x, y + height}, Pointer{x, y}});
};
