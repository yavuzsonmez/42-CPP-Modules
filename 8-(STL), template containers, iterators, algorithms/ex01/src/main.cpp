# include "../inc/Span.hpp"

int main()
{
	srand(time(NULL));

	try
	{
		Span data(100000);
		std::vector<int> vec;
		vec.push_back(12);
		vec.push_back(6);
		vec.push_back(3);

		for (unsigned int i = 0; i < 99997; i++)
			data.addNumber(rand());
		data.addManyNumbers(vec);
		std::cout << "Longest Span of the Vector: " << data.longestSpan() << std::endl;
		std::cout << "Shortest Span of the Vector: " << data.shortestSpan() << std::endl;

		Span data2(3);
		data2.addManyNumbers(vec);
		data = data2;
		std::cout << data;
		std::cout << "Longest Span of the Vector: " << data.longestSpan() << std::endl;
		std::cout << "Shortest Span of the Vector: " << data.shortestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span data(50);

		for (unsigned int i = 0; i < 50; i++)
			data.addNumber(rand() % 50);
		std::cout << "Longest Span of the Vector: " << data.longestSpan() << std::endl;
		std::cout << "Shortest Span of the Vector: " << data.shortestSpan() << std::endl;
		//std::cout << data;
		//data.addNumber(rand());
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}