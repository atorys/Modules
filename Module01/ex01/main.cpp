//
// Created by Achiote Tory on 12/9/21.
//

#include "Zombie.hpp"
#include <iostream>

#define HORDE_MAX_SIZE	10

int main(void)
{
	Zombie	*myHorde;

	myHorde = zombieHorde(HORDE_MAX_SIZE, "Tony");
	std::cout << std::endl;

	myHorde[1].announce();
	myHorde[6].announce();
	myHorde[9].announce();
	std::cout << std::endl;

	delete [] myHorde;
	return (0);
}
