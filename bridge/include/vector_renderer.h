#pragma once
#include <iostream>

#include "renderer.hpp"
class VectorRender : public Renderer {
  void render_circle(float x, float y, float radius) override {
    std::cout << "Rasterizing circle of radius " << radius << "\n";
  }
};
