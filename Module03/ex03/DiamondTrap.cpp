//
// Created by atory on 15.12.2021.
//

#include "DiamondTrap.hpp"
#define COLOR_B "\033[36m"
#define COLOR_DEF "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name", 100, 50, 30),
                                            ScavTrap(name),
                                            FragTrap(name),
                                            _name(name)
{
    this->_name = name;
    std::cout << COLOR_B << "DIAMONDTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &anotherDiamondTrap) {
    *this = anotherDiamondTrap;
    std::cout << COLOR_B << "DIAMONDTRAP : " << this->getName() + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << COLOR_B << "DIAMONDTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}

void DiamondTrap::whoAmI() {::
    std::cout << "My name is " << this->_name << '\n';
    std::cout << "My parent-ClapTrap name is " << ClapTrap::_name << '\n';
}

void DiamondTrap::displayName() const {
    std::cout << this->_name << " : ";
}

const std::string &DiamondTrap::getName() const {
    return this->_name;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &anotherDiamondTrap) {
    ClapTrap::operator=(anotherDiamondTrap);
    this->_name = anotherDiamondTrap.getName();
    return *this;
}
