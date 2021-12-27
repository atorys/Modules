//
// Created by atory on 27.12.2021.
//

#include "Character.hpp"
#define COLOR_B     "\033[33m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

Character::Character(): _name("no name") {
	for (int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
	std::cout << "[ DEF Constructor ] CHARACTER : " << _name << "\n";
}

Character::Character(const std::string &name): _name(name) {
	for (int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
	std::cout << "[ DEF Constructor ] CHARACTER : " << _name << "\n";
}

Character::Character(const Character &refCharacter) {
	*this = refCharacter;
	std::cout << "[ COPY Constructor ] CHARACTER : " << _name << "\n";
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_equipment[i])
			delete this->_equipment[i];
	std::cout << "[ DEF Destructor ] CHARACTER : " << _name << "\n";
}

/**
 * * * MEMBER FUNCTIONS
 */

const std::string &Character::getName() const {
	return this->_name;
}

void Character::use(int idx, ICharacter &target) {
	try {
		if (idx < 0 || idx > 3 || this->_equipment[idx] == NULL)
			throw "no such material to use!\n";
		std::cout << this->getName() << " : ";
		this->_equipment[idx]->use(target);
	}
	catch (const char *exception) {
		std::cerr << "Error : " << exception;
	}
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (this->_equipment[i] == NULL && m != NULL) {
			this->_equipment[i] = m;
			std::cout << COLOR_B << "[ NEW equipment " << m->getType() << " ] " << COLOR_DEF;
			std::cout << "CHARACTER : " << _name << "\n";
			break ;
		}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->_equipment[idx]) {
		std::cout << COLOR_B << "[ DEL equipment " << this->_equipment[idx]->getType() << " ] " << COLOR_DEF;
		std::cout << "CHARACTER : " << _name << "\n";
		this->_equipment[idx] = NULL;
	}
}

/**
* GETTERS / SETTERS / OVERLOADING
*/

Character &Character::operator=(const Character &refCharacter) {
	if (this == &refCharacter)
		return *this;
	this->_name = refCharacter.getName();
	for (int i = 0; i < 4; i++) {
		if (this->_equipment[i])
			delete this->_equipment[i];
		if (refCharacter._equipment[i])
			this->_equipment[i] = refCharacter._equipment[i]->clone();
	}
	return *this;
}