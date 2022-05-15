# include "../inc/Array.hpp"

int main()
{

	{
		Array<int>	arr;
		std::cout << "Empty array" << std::endl;
		std::cout << arr ;
		std::cout << std::endl << std::endl ;
	}
	{
		Array<int>	arr(10);
		std::cout << "Int array" << std::endl;
		std::cout << arr ;
		std::cout << std::endl << std::endl ;
		try
		{
			std::cout << "before writing: " << arr[9] << std::endl;
			arr[9] = -1;
			std::cout << "after writing: " << arr[9] << std::endl;

			std::cout << arr[10] << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		Array<char> arr(10);
		std::cout << "Char array" << std::endl;
		std::cout << arr ;
		std::cout << std::endl << std::endl ;
	}
	return (0);
}