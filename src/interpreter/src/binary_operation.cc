#include "binary_operation.h"
int BinaryOperation::eval() const {
  if (type == addition) return lhs->eval() + rhs->eval();
  return lhs->eval() - rhs->eval();
}
