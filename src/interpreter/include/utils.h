#include <memory>
#include <sstream>
#include <vector>

#include "binary_operation.h"
#include "element.h"
#include "integer.h"
#include "token.h"
std::vector<Token> lex(const std::string& input) {
  std::vector<Token> result;
  for (int i = 0; i < input.size(); i++) {
    switch (input[i]) {
      case '+':
        result.push_back(Token{Token::plus, "+"});
        break;
      case '-':
        result.push_back(Token{Token::minus, "-"});
        break;
      case '(':
        result.push_back(Token{Token::lparen, "("});
        break;
      case ')':
        result.push_back(Token{Token::rparen, ")"});
        break;
      default:
        std::ostringstream buffer;
        buffer << input[i];
        for (int j = i + 1; j < input.size(); ++j) {
          if (std::isdigit(input[j])) {
            buffer << input[j];
            ++i;
          } else {
            result.push_back(Token{Token::integer, buffer.str()});
            break;
          }
        }
    }
  }
  return result;
}
std::shared_ptr<Element> parse(const std::vector<Token>& tokens) {
  auto result = std::make_unique<BinaryOperation>();
  bool have_lhs = false;
  for (size_t i = 0; i < tokens.size(); i++) {
    auto token = tokens[i];
    switch (token.type) {
      case Token::integer: {
        int value;
        std::stringstream ss;
        ss << token.text;
        ss >> value;
        auto integer = std::make_shared<Integer>(value);
        if (!have_lhs) {
          result->lhs = integer;
          have_lhs = true;
        } else
          result->rhs = integer;
      } break;
      case Token::plus:
        result->type = BinaryOperation::addition;
        break;
      case Token::minus:
        result->type = BinaryOperation::substraction;
        break;
      case Token::lparen:
        int j = i;
        for (; j < tokens.size(); ++j) {
          if (tokens[j].type == Token::rparen) break;
        }
        std::vector<Token> subexpression(&tokens[i + 1], &tokens[j]);
        auto element = parse(subexpression);
        if (!have_lhs) {
          result->lhs = element;
          have_lhs = true;
        } else
          result->rhs = element;
        i = j;
    }
  }
  return result;
}
