//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "ClapTrap.hpp"

int main(void) {
    ClapTrap    first("Antony");
    ClapTrap    second("Joe");

    std::cout << "\n";
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    std::cout << "\n";

    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    std::cout << "\n";
    return 0;
}
