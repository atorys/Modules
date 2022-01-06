//
// Created by atory on 30.12.2021.
//

#include "Scalar.hpp"

int main(int ac, char **av)
{
	if (ac <= 1 || ac > 2) {
		std::cout << "illegal arguments !\n";
		return -1;
	}
	Scalar argument(av[1]);
	argument.convert();
	return 0;
}
