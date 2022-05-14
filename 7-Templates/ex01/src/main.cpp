# include "../inc/Iter.hpp"


int main()
{

	int arrInt[6] = {0, 1, 2, 3, 4, 5};
	char arrChar[6] = {'u', 'v', 'w', 'x', 'y', 'z'};
	float arrFloat[6] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};

	std::cout << "___INTEGER___" << std::endl;
	for (unsigned int i = 0; i < 6; i++)
		std::cout << "Before iter: " << arrInt[i] << std::endl;
	iter<int>(arrInt, 6, &addOne);
	std::cout << "---add---" << std::endl;
	for (unsigned int i = 0; i < 6; i++)
		std::cout << "After iter: " << arrInt[i] << std::endl;

	std::cout << "___CHAR___" << std::endl;
	for (unsigned int i = 0; i < 6; i++)
		std::cout << "Before iter: " << arrChar[i] << std::endl;
	iter<char>(arrChar, 6, &addOne);
	std::cout << "---add---" << std::endl;
	for (unsigned int i = 0; i < 6; i++)
		std::cout << "After iter: " << arrChar[i] << std::endl;

	std::cout << "___FLOAT___" << std::endl;
	for (unsigned int i = 0; i < 6; i++)
		std::cout << "Before iter: " << arrFloat[i] << std::endl;
	iter<float>(arrFloat, 6, &addOne);
	std::cout << "---add---" << std::endl;
	for (unsigned int i = 0; i < 6; i++)
		std::cout << "After iter: " << arrFloat[i] << std::endl;

	return (0);
}