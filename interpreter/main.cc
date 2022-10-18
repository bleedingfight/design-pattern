#include "utils.h"
int main() {
  using namespace std;
  std::string input{"(13-4)-(12+1)"};
  auto tokens = lex(input);
  auto parsed = parse(tokens);
  cout << input << " = " << parsed->eval() << "\n";
}
