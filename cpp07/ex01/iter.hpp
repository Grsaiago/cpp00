#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	dup(T &elem)
{
	elem += elem;
	return ;
}

template<typename T>
void	add(T &elem)
{
	elem += 1;
	return ;
}

template<typename T>
void	iter(Array<T> &arr, int len, void(*f)(T &elem)) {
	for (int i = 0; i < len; i++) {
		f(arr[i]);
	}
	return ;
}

#endif // !ITER_HPP
