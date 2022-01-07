//
// Created by atory on 07.01.2022.
//

#include "iter.hpp"
#include "iostream"

int main()
{
	int array[3] = {'a', 'b', 'c'};
	iter(array, 3, ::toUpper);
	return 0;
}
