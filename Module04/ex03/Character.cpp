//
// Created by atory on 27.12.2021.
//

#include "Character.hpp"


/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

Character::Character(): _name("no name") {
	for (int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
}

Character::Character(const std::string &name): _name(name) {
	for (int i = 0; i < 4; i++)
		this->_equipment[i] = NULL;
}

Character::Character(const Character &refCharacter) {
	*this = refCharacter;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (this->_equipment[i])
			delete this->_equipment[i];
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
		this->_equipment[idx]->use(target);
	}
	catch (const char *exception) {
		std::cerr << "Error : " << exception;
	}
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (this->_equipment[i] == NULL && m != NULL)
			this->_equipment[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->_equipment[idx])
		this->_equipment[idx] = NULL;
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
		this->_equipment[i] = refCharacter._equipment[i]->clone();
	}
	return *this;
}