//
// Created by atory on 07.01.2022.
//

#include "iter.hpp"

int main()
{
	char array[3] = {'a', 'b', 'c'};
	iter(array, 3, printElem);
	std::cout << "\n";
	iter(array, 3, toUpper);
	iter(array, 3, printElem);
	std::cout << "\n";

	float array2[3] = {42.0f, 0.0f, 21.21f};
	iter(array2, 3, printElem);
	std::cout << "\n";

	std::string array3[3] = {"happy", "2022", "year"};
	iter(array3, 3, printElem);
	std::cout << "\n";

	return 0;
}
