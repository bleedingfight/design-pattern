#include "font.h"
Font::Font(const std::string& key) : key{key} {};
std::string Font::getKey() const { return key; }
