//
// Created by atory on 14.12.2021.
//

#include "ScavTrap.hpp"
#define COLOR_B     "\033[31m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20) {
    std::cout << COLOR_B << "SCAVTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

ScavTrap::~ScavTrap() {
    std::cout << COLOR_B << "SCAVTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}

ScavTrap::ScavTrap(const ScavTrap &anotherScavTrap) {
    *this = anotherScavTrap;
    std::cout << COLOR_B << "SCAVTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &anotherScavTrap) {
    ClapTrap::operator=(anotherScavTrap);
    return *this;
}

/**
 * * * MEMBER FUNCTIONS
 */

void ScavTrap::attack(const std::string &target)
{
    this->_energyPoints--;

    displayName();
    std::cout << " attacks VIOLENTLY " + target;
    std::cout << " causing " << this->_damage << " points of damage!\n";
    displayEnergy();
}

void ScavTrap::guardGate() {
    displayName();
    std::cout << COLOR_B << " GATE KEEPER MODE ON\n" << COLOR_DEF;
}
