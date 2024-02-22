#ifndef CONVERT_HPP 
# define CONVERT_HPP
# include <string>
# include <iostream>
# include <stdexcept>
# include <cstdlib>
# include <cerrno>
# include <climits>

class Convert
{
	public:
		~Convert(void);
		static void	convert(std::string str);
	private:
		Convert(void);
};

#endif  // Convert class
