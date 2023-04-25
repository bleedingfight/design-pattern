#pragma once
#include "image.h"
void draw_image(Image& img) {
  std::cout << "About to draw the image \n";
  img.draw();
  std::cout << "Done drawing the image\n";
}
