//
// Created by atory on 26.12.2021.
//

#include "Ice.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Ice::Ice(): AMateria("ice") {}
Ice::Ice(const std::string &type): AMateria(type) {}
Ice::Ice(const Ice &refIce): AMateria(refIce) {}
Ice::~Ice() {}

/**
 * * * MEMBER FUNCTIONS
 */

AMateria *Ice::clone() const {
	return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *\n" ;
}

/**
* GETTERS / SETTERS / OVERLOADING
*/

Ice &Ice::operator=(const Ice &refIce) {
	AMateria::operator=(refIce);
	return *this;
}
