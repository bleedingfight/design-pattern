#pragma once
#include "node.h"
template <typename U>
class PreOrderIterator {
  Node<U>* current;
  explicit PreOrderIterator(Node<U>* current);
  bool opreator != (const PreOrderIterator<U>& other);
  Node<U>& operator*();
  PreOrderIterator<U>& operator++();
  using iterator = typename PreOrderIterator<U> iterator;
  iterator begin();
  iterator end();
};
