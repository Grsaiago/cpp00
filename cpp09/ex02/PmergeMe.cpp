#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <time.h>

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(PmergeMe &cpy) {
	*this = cpy;
}

PmergeMe::~PmergeMe(void) {}

PmergeMe	&PmergeMe::operator=(PmergeMe &rhs) {
	this->_vec = rhs.getVec();
	this->_deque= rhs.getDeque();
	return *this;
}

bool	PmergeMe::loadArgs(char **args) {
	int	num;

	if (!args) {
		return (false);
	}

	for (unsigned int i = 0; args[i]; i++) {
		for (unsigned int j = 0; args[i][j]; j++) {
			if (isdigit(args[i][j]) == 0) {
					return (false);
			}
		}
		num = atoi(args[i]);
		this->_vec.push_back(num);
		this->_deque.push_back(num);
	}
	return (true);
}

void	PmergeMe::printVec(void) {
	std::cout << "[";
	for (std::vector<unsigned int>::iterator it = this->_vec.begin();
			it != this->_vec.end() ; ++it)
	{
		std::cout << *it;
		if (it + 1 != this->_vec.end()) {
			std::cout << ", ";
		}
	}
	std::cout << "]" << std::endl;
}

void	PmergeMe::printDeque(void) {
	std::cout << "[";
	for (std::deque<unsigned int>::iterator it = this->_deque.begin();
			it != this->_deque.end() ; ++it)
	{
		std::cout << *it;
		if (it + 1 != this->_deque.end()) {
			std::cout << ", ";
		}
	}
	std::cout << "]" << std::endl;
}

void	PmergeMe::sortVec() {
	clock_t startTime;
	clock_t endTime;

	startTime = clock();

	mergeSort(this->_vec, 0, this->_vec.size() - 1);

	endTime = clock();
	this->vecTime = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
}

void	PmergeMe::sortDeque() {
	clock_t startTime;
	clock_t endTime;

	startTime = clock();

	mergeSort(this->_deque, 0, this->_deque.size() - 1);

	endTime = clock();
	this->dequeTime = static_cast<double>(endTime - startTime) / CLOCKS_PER_SEC;
}

template<typename T>
void	PmergeMe::mergeSort(T &data, int start, int end) {
	int mid;

	if (start >= end) {
		return ;
	}
	mid = (start + end) / 2;
	this->mergeSort(data, start, mid);
	this->mergeSort(data, mid + 1, end);
	this->insertSort(data, start, mid, end);
	return ;
}

template<typename T>
void	PmergeMe::insertSort(T &data, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = 0;
	T tmp(end - start + 1);

	while (i <= mid && j <= end)
	{
		if (data[i] <= data[j]) {
			tmp[k] = data[i];
			k++;
			i++;
		} else {
			tmp[k] = data[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
		tmp[k] = data[i];
		k++;
		i++;
	}
	while (j <= end) {
		tmp[k] = data[j];
		k++;
		j++;
	}
	std::copy(tmp.begin(), tmp.end(), data.begin() + start);
}

std::vector<unsigned int> &PmergeMe::getVec(void) {
	return this->_vec;
}

std::deque<unsigned int> &PmergeMe::getDeque(void) {
	return this->_deque;
}
