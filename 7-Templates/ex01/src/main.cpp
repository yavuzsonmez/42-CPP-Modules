# include "../inc/Iter.hpp"

class Awesome
{
	public:

		Awesome( void ) : _n( 42 ) { return; }

		int get( void ) const { return this->_n; }

	private:

		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T & x )
{
	std::cout << x << std::endl;
	return;
}

int main()
{

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
	}
	std::cout << "__________" <<  std::endl;
	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];

		iter( tab, 5, print );
		iter( tab2, 5, print );
	}
	return (0);
}