//
// Created by Achiote Tory on 12/9/21.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#define COLOR "\033[35m"
#define COLOR_R "\033[31m"
#define DEF_COLOR "\033[0m"

class HumanA {
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif
