//
// Created by atory on 15.12.2021.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap: virtual public ClapTrap {
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &anotherFragTrap);
    virtual ~FragTrap();

    FragTrap &operator=(const FragTrap &anotherFragTrap);

    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif
