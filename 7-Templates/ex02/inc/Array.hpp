#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:

		Array( void ): _arr( new T[0] ), _size( 0 ) {
			//sranddev();
			//for(unsigned int i = 0; i < _size; i++)
			//	_arr[i] = rand();
		};
		Array( unsigned int n ): _arr( new T[n] ), _size( n ) {
			//sranddev();
			//for(unsigned int i = 0; i < _size; i++)
			//	_arr[i] = rand();
		};
		Array( Array const & src ): _arr( new T[src.size()] ), _size( src.size() ) { *this = src ; }
		~Array() { delete [] _arr; }

		Array &		operator=( Array const & rhs ) {
			if ( this != &rhs )
			{
				delete [] _arr;
				unsigned int size = rhs.size();
				_arr = new T[size];
				for (unsigned int i = 0; i < size; i++)
					_arr[i] = rhs._arr[i];
			}
			return *this;
		}

		unsigned int size( void ) const {
			return _size;
		}
		T	&	operator[]( unsigned int const index ) const {
			if (index >= _size)
				throw OutOfBoundException();
			return _arr[index];
		}
		class OutOfBoundException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Array index out of bound !");
			}
		};
	private:

		T	*	_arr;
		unsigned int const _size;

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & src ) {

	unsigned int size = src.size();

	std::cout << "> Content of the array <" << std::endl;
	for (unsigned int i = 0; i < size; i++)
		std::cout << "index: " << i << " content: " << src[i] << std::endl;
	std::cout << "> End <" << std::endl;

	return (o);
}

#endif /* *********************************************************** ARRAY_H */