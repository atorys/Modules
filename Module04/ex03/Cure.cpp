//
// Created by atory on 26.12.2021.
//

#include "Cure.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Cure::Cure(): AMateria("cure") {}
Cure::Cure(const std::string &type): AMateria(type) {}
Cure::Cure(const Cure &refCure): AMateria(refCure) {}
Cure::~Cure() {}

/**
 * * * MEMBER FUNCTIONS
 */
AMateria *Cure::clone() const {
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

/**
* GETTERS / SETTERS / OVERLOADING
*/
Cure &Cure::operator=(const Cure &refCure) {
	AMateria::operator=(refCure);
	return *this;
}
