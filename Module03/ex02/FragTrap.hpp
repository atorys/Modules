//
// Created by atory on 15.12.2021.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap: public ClapTrap {
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap &anotherFragTrap);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &anotherFragTrap);

    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif
