//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    ScavTrap    adam("Adam");
    FragTrap    eva("Eva");

    std::cout << "\n";
    adam.guardGate();
    adam.attack(eva.getName());
    eva.takeDamage(adam.getDamage());
    eva.beRepaired(10);
    std::cout << "\n";

    eva.attack(adam.getName());
    adam.takeDamage(adam.getDamage());
    eva.highFivesGuys();
    std::cout << "\n";
    return 0;
}
