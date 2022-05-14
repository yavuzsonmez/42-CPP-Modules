#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	addOne(T & k)
{
	k++;
}

template <typename T>
void	iter(T * arr, unsigned int const & size, void (*f)(T & k))
{
	for (unsigned int i = 0; i < size; i++)
		f(arr[i]);
}



#endif /* ******************************************************** TEMPLATE_H */