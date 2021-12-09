//
// Created by Achiote Tory on 12/9/21.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#define COLOR "\033[35m"
#define DEF_COLOR "\033[0m"

class HumanB {
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif
