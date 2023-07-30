#include "font_factory.h"
std::shared_ptr<Font> FontFactory::getFont(const std::string& key) {
  std::map<std::string, std::shared_ptr<Font>>::iterator item =
      fontPool.find(key);
  if (item != fontPool.end())
    return fontPool[key];
  else {
    auto font = std::make_shared<Font>(key);
    fontPool[key] = font;
    return font;
  }
}
