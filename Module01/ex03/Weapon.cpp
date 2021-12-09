//
// Created by Achiote Tory on 12/9/21.
//

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string type): _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() {
//	const std::string &typeREF = _type;
	return (_type);
}

void Weapon::setType(std::string type) {
	_type = type;
}
