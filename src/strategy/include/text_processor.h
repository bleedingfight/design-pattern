#pragma once
#include "list_strategy.h"
#include <memory>
#include <sstream>
#include <string>
#include <vector>
enum class OutputFormat {
  HTML,
  MARKDOWN,
};
class TextProcessor {
private:
  std::ostringstream oss;
  std::unique_ptr<ListStrategy> list_strategy;

public:
  void append_list(const std::vector<std::string> items);
  void set_output_format(const OutputFormat format);
};
