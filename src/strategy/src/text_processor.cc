#include "text_processor.h"
void TextProcessor::append_list(const std::vector<std::string> items) {
  list_strategy->start();
  for (auto &item : items) {
    list_strategy->add_list_item(oss, item);
  }
  list_strategy->end();
}
void TextProcessor::set_output_format(const OutputFormat format) {
  switch (format) {
  case OutputFormat::MARKDOWN:
    list_strategy = std::make_unique<MarkdownListStrategy>();
    break;
  case OutputFormat::HTML:
    list_strategy = std::make_unique<HtmlListStrategy>();
    break;
  default:
    break;
  }
}
