#pragma once
#include <string>

#include "bitmap.h"
#include "image.h"
class LazyBitmap : public Image {
 private:
  Bitmap* bmp{nullptr};
  std::string filename;

 public:
  LazyBitmap(const std::string& filename);
  ~LazyBitmap();
  void draw() override;
};
