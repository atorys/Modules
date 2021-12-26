//
// Created by atory on 26.12.2021.
//

#include "AMateria.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

AMateria::AMateria(): _type("no type") {}
AMateria::AMateria(const std::string &type): _type(type) {}
AMateria::AMateria(const AMateria &refMateria) {
	*this = refMateria;
}
AMateria::~AMateria() {}

/**
 * * * MEMBER FUNCTIONS
 */

void AMateria::use(ICharacter &target) {
	std::cout <<  "* shoots an " << this->_type << "materia at " << target.getName() << " *\n" ;
}

/**
* GETTERS / SETTERS / OVERLOADING
*/

AMateria &AMateria::operator=(const AMateria &refMateria) {
	if (this == &refMateria)
		return *this;
	this->_type = refMateria.getType();
	return *this;
}

const std::string &AMateria::getType() const {
	return this->_type;
}

