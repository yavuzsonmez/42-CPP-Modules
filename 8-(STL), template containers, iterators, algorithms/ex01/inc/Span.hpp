#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <time.h>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		class NoSpaceLeftException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class NotEnoughSpaceException: public std::exception
		{
			virtual const char* what() const throw();
		};

		static void print(const int & n);

		void print_vector( void ) const;
		void addNumber( int number );
		void addManyNumbers( std::vector <int> const & range );
		int shortestSpan( void );
		int longestSpan( void );


	private:

		std::vector<int> _data;
		unsigned int _max;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */