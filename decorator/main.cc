#include <iostream>

#include "circle.h"
#include "colored_shape.h"
#include "scolored_shape.h"
#include "shape.h"
#include "stransparent_shape.h"
#include "transparent_shape.h"
int main() {
  Circle circle{0.5f};
  ColoredShape redCircle{circle, "red"};
  std::cout << redCircle.str() << "\n";
  ColoredShape cs{circle, "green"};
  TransparentShape myCircle{cs, 64};
  std::cout << myCircle.str() << "\n";
  SColoredShape<STransparentShape<Circle>> scircle("yellow", 0.8f, 4);
  std::cout << "静态装饰 " << scircle.str() << "\n";
}
