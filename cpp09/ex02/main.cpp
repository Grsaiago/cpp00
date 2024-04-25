#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	PmergeMe	merge;

	if (argc < 3 || merge.loadArgs(&argv[1]) != true) {
		std::cout << "Error! Invalid args" << std::endl;
		return (1);
	}
	std::cout << "Vec before sort: ";
	merge.printVec();
	std::cout << std::endl;

	std::cout << "Deque before sort: ";
	merge.printDeque();
	std::cout << std::endl;

	std::cout << "sortVec called" << std::endl;
	merge.sortVec();
	std::cout << "sortDeque called" << std::endl;
	merge.sortDeque();

	std::cout << "Vec after sort: ";
	merge.printVec();
	std::cout << std::endl;
	std::cout << "Deque after sort: ";
	merge.printDeque();
	std::cout << std::endl;

	std::cout << "Vec time: " << merge.vecTime << std::endl;
	std::cout << "Deque time: " << merge.dequeTime << std::endl;
}
