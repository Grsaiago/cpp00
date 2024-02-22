#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

typedef void* uintptr_t;

typedef struct Data
{
	std::string	firstName;
	std::string	lastName;
} Data;

class Serializer
{
	public:
		~Serializer();
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
	private:
		Serializer();
};

#endif // !SERIALIZER_HPP
