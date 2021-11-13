//
// Created by atory on 13.11.2021.
//

#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::newZombie(std::string name) {
    Zombie *newZombak = new Zombie();
    newZombak.selfName = name;
    return (newZombak);
}
