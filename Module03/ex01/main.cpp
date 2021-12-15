//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "ScavTrap.hpp"

int main(void) {
    ClapTrap    god("God");
    ScavTrap    adam("Adam");
    ScavTrap    eva("Eva");

    std::cout << "\n";
    adam.attack(eva.getName());
    eva.takeDamage(adam.getDamage());
    eva.beRepaired(10);
    eva.guardGate();
    std::cout << "\n";

    god.attack(adam.getName());
    adam.takeDamage(god.getDamage());
    std::cout << "\n";
    return 0;
}
