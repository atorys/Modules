//
// Created by Achiote Tory on 12/9/21.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#define COLOR "\033[35m"
#define COLOR_R "\033[31m"
#define DEF_COLOR "\033[0m"

class Weapon {
private:
	std::string	_type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType();
	void				setType(std::string type);
};

#endif
