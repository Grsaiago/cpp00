#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <ostream>

template<typename T>
class Array
{
	public:
		Array(void);
		Array(Array const &cpy);
		Array(unsigned int size);
		~Array(void);
	/* methods */
		unsigned int	size(void) const;
		T		*getInternalPtr(void) const;
	/* operator overloads */
		Array<T>	&operator=(Array<T> const &lhs);
		T		&operator[](unsigned int pos) const;
	class OutOfBoundsException : public std::logic_error
	{
		public:
			OutOfBoundsException(std::string message) : std::logic_error(message) { }
	};
	private:
		T		*_internalPtr;
		unsigned int	_internalSize;
};

# include "Array.tpp"

#endif // !ARRAY_HPP
