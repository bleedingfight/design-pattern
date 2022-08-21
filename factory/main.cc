#if FACTORY
#include "SimplePoint.h"
#else
#include "Point.h"
#endif
#include <iostream>

int main() {
  using namespace DesignPattern;
  Point a = Point::Factory.NewCartesian(1, 2.f);
  Point b = Point::Factory.NewPolar(2, 3.14 / 4);

  std::cout << a.str() << " " << b.str();
}
