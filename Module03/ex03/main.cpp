//
// Created by atory on 11.12.2021.
//

#include <iostream>
#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap     dima("Dima");

    std::cout << "\n";
    dima.ScavTrap::attack("somebody");
    dima.whoAmI();
    dima.guardGate();
    dima.highFivesGuys();
    std::cout << "\n";
    return 0;
}
