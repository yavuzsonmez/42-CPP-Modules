#include "../inc/Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}

	std::string toConvert = argv[1];
	Convert convert(toConvert);

	std::cout << convert;

	return (0);
}
