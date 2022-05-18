#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack<T>() {};
		MutantStack<T>( MutantStack const & src ) : std::stack<T>(src) {};
		virtual ~MutantStack<T>() {};

		MutantStack<T> &		operator=( MutantStack<T> const & rhs )
		{
			return	std::stack<T>::operator=(rhs) ;
		}

		typedef typename std::deque<T>::iterator iterator;
		iterator	begin() { return (std::stack<T>::c.begin()); };
		iterator	end() { return std::stack<T>::c.end(); };

};

#endif /* ***************************************************** MUTANTSTACK_H */