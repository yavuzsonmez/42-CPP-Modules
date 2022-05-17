# include "../inc/Span.hpp"

int main()
{
	srand(time(NULL));

	Span data(100000);

	try {

		for (unsigned int i = 0; i < 100000; i++)
		{
			data.addNumber(rand());
		}
	//data.addNumber(rand());

	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}