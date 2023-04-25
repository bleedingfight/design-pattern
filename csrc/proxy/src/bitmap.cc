#include "bitmap.h"
Bitmap::Bitmap(const std::string& filename) {
  std::cout << "Loading image from " << filename << "\n";
}
void Bitmap::draw() { std::cout << "Drawing image " << filename << "\b"; }
