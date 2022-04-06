#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "./replace <file> <old> <new>" << std::endl ;
		return (1);
	}

	std::ifstream		infile(argv[1]);
	std::ofstream		outfile(std::string(argv[1]) + ".replace");
	const std::string	s1(argv[2]);
	const std::string	s2(argv[3]);
	std::string			tmp;
	char				c;
	unsigned int		i;

	if (!std::string(argv[1]).length() || !s1.length() || !s2.length() || !infile.good())
	{
		std::cout << "./replace <file> <old> <new>" << std::endl ;
		return (1);
	}
	while(infile.get(c))
	{
		tmp.push_back(c) ;
 		if (c == '\n')
		{
			i = tmp.find(s1);
 			while(i != -1)
			{
				tmp.erase(i, s1.length());
				tmp.insert(i, s2);
				i = tmp.find(s1);
			}
			outfile << tmp ;
			tmp = "" ;
		}
	}
	i = tmp.find(s1);
 	while(i != -1)
	{
		tmp.erase(i, s1.length());
		tmp.insert(i, s2);
		i = tmp.find(s1);
	}
	outfile << tmp ;
	infile.close();
	outfile.close();
	return (0);
}
