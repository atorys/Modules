//
// Created by atory on 13.11.2021.
//

#include "srcs/Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie  newZombak;
    newZombak.announce();

    Zombie* anotherZ = newZombak.newZombie("Alexey");
    anotherZ->announce();
    return (0);
}