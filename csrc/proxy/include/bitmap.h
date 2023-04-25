#pragma once
#include <iostream>
#include <string>

#include "image.h"
class Bitmap : public Image {
  std::string filename;

 public:
  Bitmap(const std::string& filename);
  void draw() override;
};
