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

		void addNumber( int number );
		int shortestSpan( void );
		int longestSpan( void );


	private:

		std::vector<int> _data;
		unsigned int _max;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */