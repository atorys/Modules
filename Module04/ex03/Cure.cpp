//
// Created by atory on 26.12.2021.
//

#include "Cure.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Cure::Cure(): AMateria("cure") {
//	std::cout << "[ DEF Constructor ] CURE\n";
}
Cure::Cure(const std::string &type): AMateria(type) {
//	std::cout << "[ DEF Constructor ] CURE\n";
}
Cure::Cure(const Cure &refCure): AMateria(refCure) {
//	std::cout << "[ COPY Constructor ] CURE\n";
}
Cure::~Cure() {
//	std::cout << "[ DEF Destructor ] CURE\n";
}

/**
 * * * MEMBER FUNCTIONS
 */
AMateria *Cure::clone() const {
	return (new Cure(this->getType()));
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
