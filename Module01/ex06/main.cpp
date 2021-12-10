//
// Created by Achiote Tory on 12/10/21.
//

#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen myKaren;

	if (ac == 2)
		myKaren.complain(av[1]);
	else
		std::cout << "Karen should complain at least once!!!" << std::endl;
	return (0);
}
