#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl	bot;

	if (argc != 2)
	{
		std::cout << "./harlFilter <LEVEL_TO_FILTER>" << std::endl ;
		return (1);
	}
	bot.complain(std::string(argv[1]));
	return (0);
}
