//
// Created by atory on 13.12.2021.
//

#include "ClapTrap.hpp"
#define COLOR_B "\033[34m"
#define COLOR_DEF "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

ClapTrap::ClapTrap(): _name("Anonymous "), _hitPoints(10), _energyPoints(10), _damage(0) {}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _damage(0) {
    std::cout << COLOR_B << "CLAPTRAP : " << _name + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

ClapTrap::ClapTrap(const ClapTrap &anotherClapTrap) {
    *this = anotherClapTrap;
    std::cout << COLOR_B << "CLAPTRAP : " << _name + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

ClapTrap::~ClapTrap() {
    std::cout << COLOR_B << "CLAPTRAP : " << _name + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &anotherClapTrap) {
    std::cout << "[ Assignation operator called ]\n";
    if (this == &anotherClapTrap)
        return *this;
    this->_name = anotherClapTrap._name;
    this->_hitPoints = anotherClapTrap._hitPoints;
    this->_energyPoints = anotherClapTrap._energyPoints;
    this->_damage = anotherClapTrap._damage;
    return *this;
}


/**
 * * * MEMBER FUNCTIONS
 */

const std::string &ClapTrap::getName() const {
    return this->_name;
}

unsigned int ClapTrap::getDamage() const {
    return this->_damage;
}

unsigned int ClapTrap::getHitPoints() const {
    return this->_hitPoints;
}

void ClapTrap::attack(const std::string &target)
{
    this->_energyPoints--;

    displayName();
    std::cout << " attacks " + target;
    std::cout << " causing " << this->_damage << " points of damage!\n";
    displayEnergy();
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPoints += amount;

    displayName();
    std::cout << " was healed with " << amount << " points of HP!\n";
    displayHit();
}

void ClapTrap::takeDamage(unsigned int amount)
{
    (this->_hitPoints - amount > 0) ? this->_hitPoints -= amount : this->_hitPoints = 0;

    displayName();
    std::cout << " was attacked and received " << amount << " damage!\n";

    displayHit();
    if (this->_hitPoints <= 0)
        std::cout << _name << " has DIED.";
}


/**
 * ** DISPLAY STATUS FUNCTIONS
 */

void ClapTrap::displayName() const {
    std::cout << this->_name << " : ";
}

void ClapTrap::displayEnergy() const {
    std::cout << "          [ ";
    std::cout << this->_energyPoints << " energy points left ]\n";
}

void ClapTrap::displayHit() const {
    std::cout << "          [ ";
    std::cout << this->_hitPoints << " HP left ]\n";
}
