#ifndef CONVERT_HPP 
# define CONVERT_HPP
# include <string>
# include <iostream>

class Convert
{
	public:
		~Convert(void);
		static void	convert(std::string str);
	private:
		Convert(void);
		static void	printNanNanf(void);
		static void	printPositiveInfInff(void);
		static void	printNegativeInfInff(void);
		
};

#endif  // Convert class
