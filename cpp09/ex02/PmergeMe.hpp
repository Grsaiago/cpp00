#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# pragma once

# include <string>
# include <vector>
# include <deque>

class PmergeMe
{
	public:
		/* constructors/destructors */
		PmergeMe(void);
		PmergeMe(PmergeMe &cpy);
		~PmergeMe(void);

		/* operators */
		PmergeMe&	operator=(PmergeMe &rhs);

		/* getters/setters */
		std::vector<unsigned int> &getVec(void);
		std::deque<unsigned int> &getDeque(void);

		/* methods */
		bool	loadArgs(char **args);
		void	printVec(void);
		void	printDeque(void);

		double	dequeTime;
		double	vecTime;

		std::vector<unsigned int>	_vec;
		std::deque<unsigned int>	_deque;


		/* sortData just calls merge sort passing data as arg */
		void	sortVec(void);
		void	sortDeque(void);

		template<typename T>
		void	mergeSort(T &data, int start, int end);

		template<typename T>
		void	insertSort(T &data, int start, int mid, int end);
};

#endif
