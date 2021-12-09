//
// Created by atory on 13.11.2021.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#define COLOR "\033[35m"
#define DEF_COLOR "\033[0m"

class Zombie
{
    std::string	_name;
public:
    Zombie(std::string name);
    ~ Zombie();
    void	announce(void);
};

Zombie* 	newZombie(std::string name);
void 		randomChump(std::string name);

#endif
