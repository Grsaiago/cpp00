#pragma once

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T, typename C = std::deque<T>>
class MutantStack : public std::stack<T, C> {
public:
  typedef typename C::iterator iterator;

public:
  MutantStack(void);
  MutantStack(const MutantStack &rhs) { *this = rhs; }
  ~MutantStack() {}
  MutantStack &operator=(MutantStack const &rhs) {
    std::stack<T, C>::operator=(rhs);
    return (*this);
  }
  iterator begin(void) { return (this->c.begin()); }
  iterator end(void) { return (this->c.end()); }
};

#endif // !MUTANTSTACK_HPP
