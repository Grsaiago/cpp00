#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
	std::vector<int>	vec;
	int			find;
	std::list<int>		lst;

	find = 10;

	// Using a vector
	vec.push_back(0);
	vec.push_back(0);
	if (easyfind(vec, find) == true) {
		std::cout << "Encontrou o número " << find << " no container." << std::endl;
	} else {
		std::cout << "Não encontrou o número " << find << " no container." << std::endl;
	}
	vec.push_back(find);
	vec.push_back(0);
	if (easyfind(vec, find) == true) {
		std::cout << "Encontrou o número " << find << " no container." << std::endl;
	} else {
		std::cout << "Não encontrou o número " << find << " no container." << std::endl;
	}

	// Using a linked list
	if (easyfind(lst, find) == true) {
		std::cout << "Encontrou o número " << find << " no container." << std::endl;
	} else {
		std::cout << "Não encontrou o número " << find << " no container." << std::endl;
	}
	lst.push_back(find);
	if (easyfind(lst, find) == true) {
		std::cout << "Encontrou o número " << find << " no container." << std::endl;
	} else {
		std::cout << "Não encontrou o número " << find << " no container." << std::endl;
	}

	return (0);
}
