#include "../inc/Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data data;

	std::cout << "Data struct address: " << &data << std::endl;
	std::cout << "Data struct serialized to uintptr_t: " << serialize(&data) << std::endl;
	std::cout << "uintptr_t deserialied to pointer on data: " << deserialize(serialize(&data)) << std::endl;

	return (0);
}
