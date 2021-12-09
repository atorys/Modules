//
// Created by atory on 13.11.2021.
//

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie  newZombak("Andrew Stack");
    newZombak.announce();
    std::cout << std::endl;

    Zombie* anotherZ = newZombie("Alexey Heap");
    anotherZ->announce();
    std::cout << std::endl;

    randomChump("Tony QuickStack");
    std::cout << std::endl;

    delete anotherZ;
    return (0);
}
