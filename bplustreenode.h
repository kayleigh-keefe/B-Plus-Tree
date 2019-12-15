#ifndef BPLUSTREENODE_H
#define BPLUSTREENODE_H

template <typename T>
class Node
{
    public:
        T m_element;

        Node<T> *m_prev;
        Node<T> *m_next;

        Node(const T &x, Node<T> *prev, Node<T> *next): m_element(x), m_prev(prev), m_next(next) {}
};

// implementation of the B+-tree node. Node will take the form of a linked list.

template<typename K>
class BPlusTreeNode
{
  private:
    Node<T> *m_head;
    Node<T> *m_tail;

    int m_size;
  public:
    BPlusTreeNode();
    BPlusTreeNode(int size);
    ~BPlusTreeNode();
    BPlusTreeNode(const BPlusTreeNode<K> &source);
    BplustreeNode<K> & operator=(const BPlusTreeNode<K> &source);
    void insert(int key, K value);
    void remove(T i);
    void push_front(const T& x);
};

#include "bplustreenode.hpp"

#endif
