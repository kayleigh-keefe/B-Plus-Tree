template<typename K>
BPlusTreeNode<K>::BPlusTreeNode()
{
  m_head = NULL;
  m_tail = NULL;
  m_size = 0;
}

template<typename K>
BPlusTreeNode<K>::~BPlusTreeNode()
{
  Node<K>* curr;
  while(m_head != NULL)
  {
    curr = m_head;
    m_head = m_head->next;
    delete curr;
  }
}

template<typename K>
void BPlusTreeNode<K>::insert(int i, const K &x)
{
  Node<K>* curr;
  curr = m_head;
  if((m_size == 0) || (i == 0))
  {
    push_front(x);
  }
  else
  {
    for(int j=0; j < (i-1); j++)
    {
      curr = curr->next;
    }
    Node<K>* node_x = new Node<K>(x, curr->m_prev, curr);
    node_x->m_prev->m_next = node_x;
    curr->m_prev = node_x;
    m_size++;
  }
  return;
}

template <typename K> //add to front
void BPlusTreeNode<K>::push_front(const T &x)
{
  if(m_size == 0)
  {
    m_tail = m_head = new Node<T>(x, NULL, NULL);
  }
  else
  {
    m_head = m_head->m_prev = new BPlusTreeNode<K>(x, NULL, m_head);
  }
  m_size++;
}
