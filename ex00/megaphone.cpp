#include <iostream>

int	main(int argc, char **argv)
{
	std::string	result;
	std::string	str;
	int			len;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		str = argv[i];
		while (iswspace(str[0]))
				str.erase(0, 1);
		while (iswspace(str[str.length() - 1]))
			str.erase(str.length() - 1, 1);
		result += str; 
		if (i < argc - 1)
			result += " ";
	}
	len = result.length();
	for (int i = 0; i < len; i++) 
		result[i] = toupper(result[i]);
	std::cout << result << std::endl;
	return (0);
}
