#pragma once
#include <memory>

#include "element.h"
class BinaryOperation : public Element {
 public:
  enum Type { addition, substraction } type;
  std::shared_ptr<Element> lhs, rhs;
  int eval() const override;
};
