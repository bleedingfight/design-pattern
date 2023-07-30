#include <iostream>

#include "circle.h"
#include "colored_shape.h"
#include "func_logger.h"
#include "func_rlogger.h"
#include "scolored_shape.hpp"
#include "shape.h"
#include "stransparent_shape.hpp"
#include "tfunc_logger.h"
#include "transparent_shape.h"
int add(int a, int b) { return a + b; }
int main() {
  Circle circle{0.5f};
  ColoredShape redCircle{circle, "red"};
  std::cout << redCircle.str() << "\n";
  ColoredShape cs{circle, "green"};
  TransparentShape myCircle{cs, 64};
  std::cout << "动态装饰 " << myCircle.str() << "\n";
  SColoredShape<STransparentShape<Circle>> scircle("yellow", 128, 4);
  std::cout << "静态装饰 " << scircle.str() << "\n";
  FuncLogger([]() { std::cout << "hello\n"; }, "Hello Function")();
  make_tfunc_logger([]() { std::cout << "Func\n"; }, "Template implement")();
  auto logger_add = make_funcr_logger(add, "add");
  auto result = logger_add(2, 3);
}
