#pragma once
#ifndef RPN_HPP
#define RPN_HPP

#include <cctype>
#include <exception>
#include <iostream>
#include <sstream>
#include <stack>

class RPN {
public:
  RPN(std::string args);
  RPN(RPN &cpy);
  ~RPN(void);
  RPN &operator=(RPN &rhs);
  void calculate(void);
  std::stack<int> &getStack(void);
  std::string &getArgs(void);

protected:
  std::stack<int> _stack;
  std::string _args;

  class DivisionByZero : public std::exception {
  public:
    virtual const char *what() const throw() {
      return ("Error: Divided by zero");
    }
  };
};

#endif
