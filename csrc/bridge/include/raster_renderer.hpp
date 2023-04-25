#pragma once
#include <iostream>

#include "renderer.hpp"
struct RasterRenderer : public Renderer {
  void render_circle(float x, float y, float radius) override {
    std::cout << "Drawing a vector circle of radius " << radius << "\n";
  }
};
