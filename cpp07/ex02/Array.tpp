template<typename T>
Array<T>::Array(void)
{
	this->_internalPtr = new T[0];
	this->_internalSize = 0;
	return ;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_internalPtr != NULL)
		delete[] this->_internalPtr;
}

template<typename T>
Array<T>::Array(Array<T> const &cpy) : _internalPtr(new T[cpy.size()]), _internalSize(cpy.size())
{
	for (unsigned int i = 0; i < cpy.size(); i++)
		this->_internalPtr[i]  = cpy.getInternalPtr()[i];
	return ;
}

template<typename T>
Array<T>::Array(unsigned int size)
{
	this->_internalPtr = new T[size];
	this->_internalSize = size;
}

template<typename T>
T	*Array<T>::getInternalPtr(void) const
{
	return (this->_internalPtr);
}

template<typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_internalSize);
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
	if (pos >= this->size())
		throw Array<T>::OutOfBoundsException("Hey! You're not supposed to be here!");
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
