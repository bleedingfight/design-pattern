#pragma once
#include <sstream>
#include <string>
enum class OutputFormat { MARKDOWN, HTML };
class ListStrategy {
public:
  virtual void start(std::ostringstream &oss){};
  virtual void add_list_item(std::ostringstream &oss,
                             const std::string &item){};
  virtual void end(std::ostringstream &oss){};
};
