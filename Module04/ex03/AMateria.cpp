//
// Created by atory on 26.12.2021.
//

#include "AMateria.hpp"
#define COLOR_B     "\033[37m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

AMateria::AMateria(): _type("no type") {
//	std::cout << "[ DEF Constructor ] AMATERIA\n";
}
AMateria::AMateria(const std::string &type): _type(type) {
//	std::cout << "[ DEF Constructor ] AMATERIA\n";
}
AMateria::AMateria(const AMateria &refMateria) {
	*this = refMateria;
//	std::cout << "[ COPY Constructor ] AMATERIA\n";
}
AMateria::~AMateria() {
//	std::cout << "[ DEF Destructor ] AMATERIA\n";
}

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
