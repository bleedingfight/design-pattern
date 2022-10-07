#include "lazy_bitmap.h"
LazyBitmap::LazyBitmap(const std::string& filename) : filename(filename){};
LazyBitmap::~LazyBitmap() { delete bmp; }
void LazyBitmap::draw() {
  if (!bmp) bmp = new Bitmap(filename);
  bmp->draw();
}
