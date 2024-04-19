#include "Span.hpp"
#include <iostream>

int main(void) {
  Span obj(5);
  Span obj2(11000);

  std::cout << obj.getSize() << std::endl;
  std::cout << obj.getCapacity() << std::endl;

  try {
    obj.addNumber(6);
    obj.addNumber(3);
    obj.addNumber(17);
    obj.addNumber(9);
    obj.addNumber(11);
  } catch (std::exception &err) {
    std::cout << "deu erro" << std::endl;
  }
  std::cout << "--- obj.shortestSpan() ---" << std::endl;
  std::cout << obj.shortestSpan() << std::endl;
  std::cout << "--- obj.longestSpan() ---" << std::endl;
  std::cout << obj.longestSpan() << std::endl;
  std::cout << obj;

  std::cout << "--- obj2.fillSpan() ---" << std::endl;
  obj2.fillSpan();
  std::cout << "--- obj2.shortestSpan() ---" << std::endl;
  std::cout << obj2.shortestSpan() << std::endl;
  std::cout << "--- obj2.longestSpan() ---" << std::endl;
  std::cout << obj2.longestSpan() << std::endl;
  std::cout << "--- Printing obj2 would spamm the terminal xD ---" << std::endl;
  return (0);
}
