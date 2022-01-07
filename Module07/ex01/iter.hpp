//
// Created by atory on 07.01.2022.
//

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template <typename T>
void	toUpper(T& elem) {
	std::cout << static_cast<char>(std::toupper(elem)) << "\n";
}

template <typename T1, typename T2>
void	iter(T1* arrayAddress, T2 lenOfArray, void (func)(T1& arrayElem)) {
	for (int i = 0; i < lenOfArray; i++)
		func(arrayAddress[i]);
	return ;
}

#endif
