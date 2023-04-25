#include "node.h"
template <typename T>
Node<T>::Node(const T& value) : value(value) {}
template <typename T>
Node<T>::Node(const T& value, Node<T>* const left, Node<T>* const right)
    : value(value), left(left), right(right) {
  this->left->tree = this->right->tree = tree;
  this->left->parent = this->right->parent = this;
}
template <typename T>
void Node<T>::set_tree(BinaryTree<T>* t) {
  tree = t;
  if (left) left->set_tree(t);
  if (right) right->set_tree(t);
}
template class Node<std::string>;
