#pragma once
#include <iostream>
#include <string>

#include "line_to_point_adapter.h"
void DrawPoints(std::vector<Pointer>::iterator begin,
                std::vector<Pointer>::iterator end, const int width = 11,
                const int height = 11) {
  int count = 0;
  std::vector<std::string> data;
  for (int i = 0; i <= width; i++) {
    for (int j = 0; j <= height; j++) {
      data.push_back(".");
    }
  }
  for (auto iter = begin; iter != end; iter++) {
    data[(*iter).y * height + (*iter).x] = "#";
  }
  for (int r = 0; r < height; r++) {
    for (int c = 0; c < width; c++) {
      std::cout << data[r * width + c] << " ";
    }
    std::cout << "\n";
  }
}
