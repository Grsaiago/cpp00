#ifndef SPAN_HPP
# define SPAN_HPP
# include <list>
# include <stdexcept>
# include <algorithm>
# include <iostream>

class Span
{
	public:
	// constructors/destructors
		Span(unsigned int capacity);
		Span(Span const &cpy);
		~Span(void);
	// operator overloads
		Span&	operator=(Span const &rhs);
	// methods
		unsigned int	getCapacity(void) const;
		unsigned int	getSize(void) const;
		std::list<int>	getLst(void) const;
		void		addNumber(unsigned int numb);
		unsigned int	longestSpan(void) const;
		unsigned int	shortestSpan(void) const;
		void		fillSpan(void);
		void		putSpan(std::ostream &os) const;
	private:
		unsigned int		_capacity;
		unsigned int		_size;
		std::list<int>		_internal_lst;
};

std::ostream	&operator<<(std::ostream &os, Span const &rhs);

#endif
