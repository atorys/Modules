//
// Created by atory on 13.12.2021.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class   ClapTrap {
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(std::string name, unsigned int hP, unsigned int eP, unsigned int damage);
    ClapTrap(ClapTrap const &anotherClapTrap);
    virtual ~ClapTrap();

    ClapTrap    &operator=(const ClapTrap &anotherClapTrap);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    virtual std::string const   &getName() const;
    unsigned int        getHitPoints() const;
    unsigned int        getDamage() const;

    virtual void displayName() const;
    void displayHit() const;
    void displayEnergy() const;
};

#endif
