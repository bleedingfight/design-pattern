#include "markdown_liststrategy.h"
void MarkdownListStrategy::add_list_item(std::ostringstream &oss,
                                         const std::string &item) {
  oss << "* " << item << "\n";
}
