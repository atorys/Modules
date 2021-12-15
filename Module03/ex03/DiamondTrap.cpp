//
// Created by atory on 15.12.2021.
//

#include "DiamondTrap.hpp"
#define COLOR_B "\033[36m"
#define COLOR_DEF "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"),
                                            ScavTrap(name),
                                            FragTrap(name),
                                            _name(name)
{
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_damage = FragTrap::_damage;
    std::cout << COLOR_B << "DIAMONDTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << COLOR_B << "DIAMONDTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}

void DiamondTrap::whoAmI() {
    std::cout << "My name is " << this->_name << '\n';
    std::cout << "My parent-ClapTrap name is " << ClapTrap::_name << '\n';
}