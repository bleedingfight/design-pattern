#pragma once
#include <map>
#include <memory>

#include "font.h"
class FontFactory {
 private:
  std::map<std::string, std::shared_ptr<Font>> fontPool;

 public:
  std::shared_ptr<Font> getFont(const std::string& key);
};
