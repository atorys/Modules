//
// Created by atory on 07.01.2022.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "algorithm"
#include "iostream"

template <typename T>
typename T::const_iterator easyfind(T const& container, int value)
{
	typename T::const_iterator i;
	i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw std::out_of_range("no such element !\n");
	return i;
}

template <typename T>
void	printContainer(const T& container)
{
	typename T::const_iterator i;
	i = container.begin();
	while (i != container.end())
		std::cout << *i++ << ' ';
	std::cout << std::endl;
}

#endif
