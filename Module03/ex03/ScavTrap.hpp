//
// Created by atory on 14.12.2021.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap {
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &anotherScavTrap);
    virtual ~ScavTrap();

    ScavTrap    &operator=(const ScavTrap &anotherScavTrap);

    void attack(std::string const &target);
    void guardGate();
};

#endif
