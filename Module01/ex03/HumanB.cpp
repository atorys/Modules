//
// Created by Achiote Tory on 12/9/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(&weapon) {
	std::cout << "HumanB ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was created with ";
	std::cout << COLOR << _weapon->getType() << DEF_COLOR;
	std::cout << " weapon." << std::endl;
}

HumanB::HumanB(std::string name): _name(name) {
	std::cout << "HumanB ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was created." << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was deleted." << std::endl;
}

void HumanB::attack() {
	std::cout << "HumanB " << _name;
	std::cout << COLOR_R << " attacks " << DEF_COLOR << "with his ";
	std::cout << _weapon->getType();
	std::cout << " weapon." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}
