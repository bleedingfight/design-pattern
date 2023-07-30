#include "element.h"
class Integer : public Element {
 private:
  int value;

 public:
  explicit Integer(const int value);
  int eval() const override;
};
