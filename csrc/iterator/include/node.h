#pragma once
#include <string>

#include "binary_tree.h"
template <typename T>
class BinaryTree;
template <typename T>
class Node {
 public:
  T value;
  Node<T> *left = nullptr;
  Node<T> *right = nullptr;
  Node<T> *parent = nullptr;
  BinaryTree<T> *tree = nullptr;

  explicit Node(const T &value);
  Node(const T &value, Node<T> *const left, Node<T> *const right);
  void set_tree(BinaryTree<T> *t);
};
