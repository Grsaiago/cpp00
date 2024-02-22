#ifndef CONVERT_HPP 
# define CONVERT_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <stdexcept>
# include <limits>
# include <cstdlib>
# include <cerrno>

class Convert
{
	public:
		~Convert(void);
		static void	convert(std::string str);
	private:
		Convert(void);
};

#endif  // Convert class
