//
// Created by atory on 07.01.2022.
//

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template <typename T1, typename T2>
void	iter(T1* array, T2 lenOfArray, void (func)(T1& arrayElem)) {
	for (int i = 0; i < lenOfArray; i++)
		func(array[i]);
}

template <typename T1, typename T2>
void	iter(T1* array, T2 lenOfArray, void (func)(T1 const& arrayElem)) {
	for (int i = 0; i < lenOfArray; i++)
		func(array[i]);
}

template <typename T>
void	printElem(T& elem) {
	std::cout << elem << " ";
}

template <typename T>
void	toUpper(T& elem) {
	elem = std::toupper(elem);
}

#endif
