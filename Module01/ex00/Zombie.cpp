//
// Created by atory on 13.11.2021.
//

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name): _name(name) {
	std::cout << "Zombie ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was born." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie ";
	std::cout << COLOR << _name << DEF_COLOR;
	std::cout << " was deleted." << std::endl;
}

void Zombie::announce() {
	std::cout << COLOR << _name << DEF_COLOR;
    std::cout << " likes BraiiiiiiinnnzzzZ..." << std::endl;
}
