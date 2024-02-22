#include "Serializer.hpp"

int main(void)
{
	Data * ptr = new Data;

	ptr->firstName = "Gabriel";
	ptr->lastName = "Saiago";

	std::cout << "Os valores de ptr ANTES de passar pelo processo de serialização:" << '\n';
	std::cout << "firstName: " << ptr->firstName << '\n';
	std::cout << "lastName: " << ptr->lastName << '\n';
	std::cout << "================================================" << '\n';
	ptr = Serializer::deserialize(Serializer::serialize(ptr));
	std::cout << "Os valores de ptr DEPOIS de passar pelo processo de serialização:" << '\n';
	std::cout << "firstName: " << ptr->firstName << '\n';
	std::cout << "lastName: " << ptr->lastName << '\n';

	std::cout << std::boolalpha;
	std::cout << "O valot de ptr é igual ao de deserialize(serialize(ptr))?: " << (Serializer::deserialize(Serializer::serialize(ptr)) == ptr) << std::endl;
	std::cout << std::noboolalpha;
	return (0);
}
