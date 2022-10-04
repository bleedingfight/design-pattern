#pragma once
#include <cmath>
#include <vector>

#include "line.h"
struct LineToPointAdapter {
  int elems;  // 用于绘图的时候确定绘板(正方形绘板)
  using Points = typename std::vector<Pointer>;
  LineToPointAdapter(Line& line);
  virtual Points::iterator begin() { return points.begin(); }
  virtual Points::iterator end() { return points.end(); };

 private:
  Points points;
};
