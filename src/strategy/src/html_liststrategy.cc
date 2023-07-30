#include "html_liststrategy.h"
void HtmlListStrategy::start(std::ostringstream &oss) { oss << "<ul>\n"; };
void HtmlListStrategy::add_list_item(std::ostringstream &oss,
                                     const std::string &item) {
  oss << "<li>" << item << "</li>\n";
};
void HtmlListStrategy::end(std::ostringstream &oss) { oss << "</ul>\n"; };
