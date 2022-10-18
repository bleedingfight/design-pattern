#include <iostream>
#include <string>

#include "binary_tree.h"
int main() {
  using namespace std;
  BinaryTree<string> family{new Node<string>{
      "me",
      new Node<string>{"mother", new Node<string>{"mother's mother"},
                       new Node<string>{"mother's father"}},
      new Node<string>{"father"}}};

  // 先序遍历
  for (auto it = family.begin(); it != family.end(); ++it) {
    cout << (*it).value << "\n";
  }

  cout << "=== and now, through a dedicated object:\n";

  // use iterator name
  for (const auto& it : family.pre_order) {
    cout << it.value << "\n";
  }
}
