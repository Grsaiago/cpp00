#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
bool	easyfind(T const &container, int find)
{
	if (std::find(container.begin(), container.end(), find) != container.end())
		return (true);
	return (false);
}

#endif // !EASYFIND_HPP
