//
// Created by Achiote Tory on 12/9/21.
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
	Zombie();
	~ Zombie();
	void	announce(void);
	void 	initZombie(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
