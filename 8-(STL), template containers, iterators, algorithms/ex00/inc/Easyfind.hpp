#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <iterator>
# include <exception>
# include <algorithm>
# include <vector>
# include <list>
# include <map>
# include <stack>

template <typename T>
typename T::iterator easyfind(T & data, int to_find)
{
	typename T::iterator it;

	it = std::find(data.begin(), data.end(), to_find);
	if (it != data.end())
		return (it);
	else
		throw std::exception();
};

#endif /* ******************************************************** EASYFIND_H */