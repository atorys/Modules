//
// Created by Achiote Tory on 12/9/21.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(&weapon) {
	std::cout << "HumanA ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was created with ";
	std::cout << COLOR << _weapon->getType() << DEF_COLOR;
	std::cout << " weapon." << std::endl;
}
HumanA::~HumanA() {
	std::cout << "HumanA ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was deleted." << std::endl;
}

void HumanA::attack() {
	std::cout << "HumanA " << _name;
	std::cout << COLOR_R << " attacks " << DEF_COLOR << "with his ";
	std::cout << _weapon->getType();
	std::cout << " weapon." << std::endl;
}
