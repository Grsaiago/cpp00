#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>

template<typename T>
class Array
{
	public:
		Array(unsigned int size);
		~Array(void);
	/* methods */
		unsigned int	size(void) const;
		T		*getInternalPtr(void) const;
	/* operator overloads */
		Array<T>	&operator=(Array<T> const &lhs);
		T		&operator[](unsigned int pos) const;
	private:
		T		*_internalPtr;
		unsigned int	_internalSize;
};

template<typename T>
Array<T>::Array(unsigned int size)
{
	this->_internalPtr = new T[size];
	this->_internalSize = size;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_internalPtr != NULL)
		delete[] this->_internalPtr;
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_internalSize);
}

template<typename T>
T	*Array<T>::getInternalPtr(void) const
{
	return (this->_internalPtr);
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_internalPtr = new T[rhs.size()];
	this->_internalSize = rhs.size();
	for (unsigned int i = 0; i < rhs.size(); i++)
		*this[i] = rhs[i];
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int pos) const
{
	return(this->_internalPtr[pos]);
}

template<typename T>
std::ostream	&operator<<(std::ostream &out, const Array<T> &arr)
{
	unsigned int i = 0;

	out << '[';
	while (i < arr.size())
	{
		out << arr[i];
		i++;
		if (i != arr.size())
			out << ',';
	}
	out << ']';
	return (out);
}

#endif // !ARRAY_HPP
