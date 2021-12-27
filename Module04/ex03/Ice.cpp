//
// Created by atory on 26.12.2021.
//

#include "Ice.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Ice::Ice(): AMateria("ice") {
//	std::cout << "[ DEF Constructor ] ICE\n";
}
Ice::Ice(const std::string &type): AMateria(type) {
//	std::cout << "[ DEF Constructor ] ICE\n";
}
Ice::Ice(const Ice &refIce): AMateria(refIce) {
//	std::cout << "[ COPY Constructor ] ICE\n";
}
Ice::~Ice() {
//	std::cout << "[ DEF Destructor ] ICE\n";
}

/**
 * * * MEMBER FUNCTIONS
 */

AMateria *Ice::clone() const {
	return (new Ice(this->getType()));
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n" ;
}

/**
* GETTERS / SETTERS / OVERLOADING
*/

Ice &Ice::operator=(const Ice &refIce) {
	AMateria::operator=(refIce);
	return *this;
}
