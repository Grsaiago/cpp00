#include "Span.hpp"
#include <cstdlib>
#include <exception>

Span::Span(unsigned int capacity) : _capacity(capacity), _size(0) {}

Span::Span(Span const &cpy)
    : _capacity(cpy.getCapacity()), _size(0), _internal_lst(cpy.getLst()) {}

Span::~Span(void) {}

Span &Span::operator=(Span const &rhs) {
  this->_internal_lst = rhs.getLst();
  this->_capacity = rhs.getCapacity();
  return (*this);
}

unsigned int Span::getCapacity(void) const { return (this->_capacity); }

unsigned int Span::getSize(void) const { return (this->_size); }

std::list<int> Span::getLst(void) const {
  return (std::list<int>(this->_internal_lst));
}
void Span::addNumber(unsigned int numb) {
  if (this->_size == this->_capacity)
    throw std::length_error("container full");
  this->_internal_lst.push_back(numb);
  this->_size++;
}

unsigned int Span::longestSpan(void) const {
  if (this->_size < 2)
    throw std::length_error("not enough items");
  return (*std::max_element(this->_internal_lst.begin(),
                            this->_internal_lst.end()) -
          *std::min_element(this->_internal_lst.begin(),
                            this->_internal_lst.end()));
}

unsigned int Span::shortestSpan(void) const {
  int min = this->longestSpan();
  if (this->_size < 2)
    throw std::length_error("not enough items");
  for (std::list<int>::const_iterator i = this->_internal_lst.begin();
       i != this->_internal_lst.end(); i++) {
    for (std::list<int>::const_iterator j = this->_internal_lst.begin();
         j != this->_internal_lst.end(); j++) {
      if (i == j)
        continue;
      if (std::abs(*i - *j) < min)
        min = std::abs(*i - *j);
    }
  }
  return (min);
}

void Span::fillSpan(void) {
  try {
    while (true) {
      this->addNumber(rand());
    }
  } catch (std::exception &err) {
    ;
  }
  return;
}

void Span::putSpan(std::ostream &os) const {
  for (std::list<int>::const_iterator i = this->_internal_lst.begin();
       i != this->_internal_lst.end(); i++) {
    os << *i << ' ';
  }
  return;
}

std::ostream &operator<<(std::ostream &os, Span const &rhs) {
  rhs.putSpan(os);
  os << std::endl;
  return (os);
}
