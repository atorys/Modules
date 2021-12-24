//
// Created by atory on 15.12.2021.
//

#include "FragTrap.hpp"
#define COLOR_B "\033[35m"
#define COLOR_DEF "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30) {
    std::cout << COLOR_B << "FRAGTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

FragTrap::FragTrap(const FragTrap &anotherFragTrap) {
    *this = anotherFragTrap;
    std::cout << COLOR_B << "FRAGTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

FragTrap::~FragTrap() {
    std::cout << COLOR_B << "FRAGTRAP : " << this->_name + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}

FragTrap &FragTrap::operator=(const FragTrap &anotherFragTrap) {
    ClapTrap::operator=(anotherFragTrap);
    return *this;
}

/**
 * * * MEMBER FUNCTIONS
 */

void FragTrap::attack(const std::string &target)
{
    this->_energyPoints--;

    displayName();
    std::cout << " attacks SUPER PUPER VIOLENTLY " + target;
    std::cout << " causing " << this->_damage << " points of damage!\n";
    displayEnergy();
}

void FragTrap::highFivesGuys() {
    displayName();
    std::cout << " has given a high five! ";
    std::cout << COLOR_B << "love life peace!\n" << COLOR_DEF;
}
