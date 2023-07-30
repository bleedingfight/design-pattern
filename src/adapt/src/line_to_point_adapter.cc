#include "line_to_point_adapter.h"
LineToPointAdapter::LineToPointAdapter(Line& line) {
  int left = std::min(line.start.x, line.end.x);
  int right = std::max(line.start.x, line.end.x);
  int top = std::min(line.start.y, line.end.y);
  int bottom = std::max(line.start.y, line.end.y);
  int dx = right - left;
  int dy = line.end.y - line.start.y;
  if (dx == 0) {
    for (int y = top; y <= bottom; ++y) points.emplace_back(Pointer{left, y});
  } else if (dy == 0) {
    for (int x = left; x <= right; ++x) {
      points.emplace_back(Pointer{x, top});
    }
  }
  elems = points.size();
}
