#include "font.h"
#include "font_factory.h"
int main() {
  FontFactory ff;
  auto font = ff.getFont("msfont");
  std::cout << *font;
}
