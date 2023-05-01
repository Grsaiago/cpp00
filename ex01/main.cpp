#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		phoneBook;
	std::string		buff;
	unsigned int	len;

	printWelcome();
	while (std::getline(std::cin, buff))
	{
		len = buff.length();
		for (unsigned int i = 0; i < len; i++)
			buff[i] = toupper(buff[i]);
		if (buff.compare("ADD") == 0)
			phoneBook.addContact();
		else if (buff.compare("SEARCH") == 0)
			phoneBook.searchList();
		else if (buff.compare("HELP") == 0)
			std::cout << "The available commands are: ADD, SEARCH and EXIT" << std::endl;
		else if (buff.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Ooops! Wrong input xD xD" << std::endl;
		std::cout << "What do you wanna do next?" << std::endl;
	}
	std::cout << "byeeee xD xD" << std::endl;
	return (0);
}

void	printWelcome(void)
{
	std::cout << "Welcome to your awesome 80's ish phonebook!\n";
	std::cout << "The available commands are: ADD, SEARCH and EXIT" << std::endl;
	return ;
}
