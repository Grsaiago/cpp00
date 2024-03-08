#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	std::list<struct rateInfo>	*db;
	
	if(argc != 2) {
		std::cerr << "Error! Incorrect number of args" << std::endl;
		return (EXIT_FAILURE);
	}
		
	db = loadDatabase("data.csv");
	if (!db)
		return (EXIT_FAILURE);

	queryFile(argv[1], *db);
	delete db;
	return(EXIT_SUCCESS);
}

