#pragma once
#include <iostream>
#include <string>
class Token {
 public:
  enum Type { integer, plus, minus, lparen, rparen } type;
  std::string text;
  explicit Token(Type type, const std::string& text);
  friend std::ostream& operator<<(std::ostream& os, const Token& obj) {
    return os << "`" << obj.text << "`";
  };
};
