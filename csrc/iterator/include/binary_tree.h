#pragma once
#include "node.h"
template <typename T>
class Node;
template <typename T>
class BinaryTree {
  Node<T>* root = nullptr;

 public:
  explicit BinaryTree(Node<T>* const root) : root{root}, pre_order{*this} {
    root->set_tree(this);
  }

  ~BinaryTree() {
    if (root) delete root;
  }

  template <typename U>
  struct PreOrderIterator {
    Node<U>* current;

    explicit PreOrderIterator(Node<U>* current) : current(current) {}

    bool operator!=(const PreOrderIterator<U>& other) {
      return current != other.current;
    }

    // no continuations in C++ (unlike C#)
    PreOrderIterator<U>& operator++() {
      if (current->right) {
        current = current->right;
        while (current->left) current = current->left;
      } else {
        Node<T>* p = current->parent;
        while (p && current == p->right) {
          current = p;
          p = p->parent;
        }
        current = p;
      }
      return *this;
    }

    Node<U>& operator*() { return *current; }
  };

  typedef PreOrderIterator<T> iterator;

  iterator end() { return iterator{nullptr}; }

  iterator begin() {
    Node<T>* n = root;

    if (n)
      while (n->left) n = n->left;
    return iterator{n};
  }

  // expose as a traversal object
  // todo: make this inorder
  class pre_order_traversal {
    BinaryTree<T>& tree;

   public:
    pre_order_traversal(BinaryTree<T>& tree) : tree{tree} {}
    iterator begin() { return tree.begin(); }
    iterator end() { return tree.end(); }
  } pre_order;
};
