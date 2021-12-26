//
// Created by atory on 15.12.2021.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    std::string _name;
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &anotherDiamondTrap);
    ~DiamondTrap();

    using ScavTrap::attack;
    void whoAmI();
    virtual void displayName() const;

    virtual std::string const   &getName() const;
    DiamondTrap    &operator=(const DiamondTrap &anotherDiamondTrap);
};

#endif
