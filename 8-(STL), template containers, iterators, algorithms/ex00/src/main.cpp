# include "../inc/Easyfind.hpp"

int main()
{
	int arr[] = {165, 978, 654, 465, 12, -78};
	int size = (sizeof(arr)/sizeof(*arr));

	std::vector<int> vec;
	std::list<int> lst;

	for (unsigned int i = 0; i < size; i++)
	{
		vec.push_back(arr[i]);
		lst.push_back(arr[i]);
	}

	try {
		std::vector<int>::iterator it_v = easyfind(vec, 12);
		std::cout << "Occurence found in vector: " << *it_v << std::endl;

		std::list<int>::iterator it_l = easyfind(lst, 13);
		std::cout << "Occurence found in list: " << *it_l << std::endl;
	}

	catch (const std::exception & e)
	{
		std::cout << "Occurence not found with given parameters." << std::endl;
	}

	return (0);
}