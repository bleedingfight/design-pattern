#pragma once
#include "list_strategy.h"
class HtmlListStrategy : public ListStrategy {
public:
  void start(std::ostringstream &oss) override;
  void add_list_item(std::ostringstream &oss, const std::string &item) override;
  void end(std::ostringstream &oss) override;
};
