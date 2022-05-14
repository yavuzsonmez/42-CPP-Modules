# include "../inc/Template.hpp"


int main()
{
	{
		int a = 3;
		int b = 1;

		float c = 1.5;
		float d = 6.4;

		char e = 'e';
		char f = 'f';

		std::cout << "____________SWAP____________" << std::endl;
		std::cout << "Before swap, a = " << a << " and b = " << b << std::endl;
		std::cout << "Before swap, c = " << c << " and d = " << d << std::endl;
		std::cout << "Before swap, e = " << e << " and f = " << f << std::endl;
		::swap(a, b);
		::swap(c, d);
		::swap(e, f);
		std::cout << "After swap, a = " << a << " and b = " << b << std::endl;
		std::cout << "After swap, c = " << c << " and d = " << d << std::endl;
		std::cout << "After swap, e = " << e << " and f = " << f << std::endl;
		std::cout << "____________MIN____________" << std::endl;
		std::cout << "minimum between " << a << " and " << b << " is " << ::min(a, b) << std::endl;
		std::cout << "minimum between " << c << " and " << d << " is " << ::min(c, d) << std::endl;
		std::cout << "____________MAX____________" << std::endl;
		std::cout << "maximum between " << a << " and " << b << " is " << ::max(a, b) << std::endl;
		std::cout << "maximum between " << c << " and " << d << " is " << ::max(c, d) << std::endl;
		std::cout << "___________________________" << std::endl << std::endl;
	}
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}