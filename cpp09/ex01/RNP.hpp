#pragma once
#ifndef RNP_HPP
# define RNP_HPP

# include <stack>
# include <iostream>
# include <sstream>
# include <exception>
# include <cctype>

class RNP
{
	public:
		RNP(std::string args);
		RNP(RNP &cpy);
		~RNP(void);
		RNP&	operator=(RNP &rhs);
		void	calculate(void);
		std::stack<int>	&getStack(void);
		std::string	&getArgs(void);
	protected:
		std::stack<int>	_stack;
		std::string	_args;

	class DivisionByZero : public std::exception {
		public:
			virtual const char *what() const throw() {
				return ("Error: Divided by zero");
			}
	};
};

#endif
