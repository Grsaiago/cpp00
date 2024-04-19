#include "RPN.hpp"

int main(int argc, char **argv) {

  if (argc != 2) {
    std::cout << "Error!" << std::endl;
    return (1);
  }

  try {
    RPN calculator(argv[1]);
    calculator.calculate();
  } catch (std::exception &err) {
    std::cout << err.what() << std::endl;
  }
  return 0;
}
