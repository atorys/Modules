//
// Created by Achiote Tory on 12/9/21.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << "Zombie ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was deleted." << std::endl;
}

void Zombie::announce() {
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " likes BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::initZombie(std::string name) {
	_name = name;
	std::cout << "Zombie ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was born." << std::endl;
}
