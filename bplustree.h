/*B+-tree implementation*/

#ifndef BPLUSTREE_H
#define BPLUSTREE_H

#include <stdexcept>

template<typename T>
class BPlus
{
  private:
    
  public:
    BPlus();

    ~BPlus();

    BPlus(T* contents);

    BPlus& operator=(const BPlus& source);

    // const T& operator[]() const;

    // T& operator[]();

};

#include "bplustree.hpp"

#endif