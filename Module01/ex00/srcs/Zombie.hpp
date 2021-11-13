//
// Created by atory on 13.11.2021.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
    std::string selfName;
public:
    Zombie() {}
    void announce(void);
    Zombie* newZombie(std::string name);
};

#endif
