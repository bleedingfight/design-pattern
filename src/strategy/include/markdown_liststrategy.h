#pragma once
#include "list_strategy.h"
class MarkdownListStrategy : public ListStrategy {
public:
  void add_list_item(std::ostringstream &oss, const std::string &item) override;
};
