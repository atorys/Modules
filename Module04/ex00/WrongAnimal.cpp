//
// Created by atory on 26.12.2021.
//

#include "WrongAnimal.hpp"
#define COLOR_B     "\033[31m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
WrongAnimal::WrongAnimal() {
	std::cout << COLOR_B << "WRONG_ANIMAL : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ DEF Constructor ]\n";
}

WrongAnimal::WrongAnimal(const std::string &type): _type(type) {
	std::cout << COLOR_B << "WRONG_ANIMAL : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ DEF Constructor ]\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &refWrongAnimal) {
	*this = refWrongAnimal;
	std::cout << COLOR_B << "WRONG_ANIMAL : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ COPY Constructor ]\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << COLOR_B << "WRONG_ANIMAL : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ DEF Destructor ]\n";
}

/**
 * * * MEMBER FUNCTIONS
 */

void WrongAnimal::makeSound() const {
	std::cout << "- unknown sound of unknown WRONG Animal.\n";
}


/**
 * GETTERS / SETTERS / OVERLOADING
 */

const std::string &WrongAnimal::getType() const {
	return this->_type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &refWrongAnimal) {
	std::cout << "[ Assignation operator called ]\n";
	if (this == &refWrongAnimal)
		return *this;
	this->_type = refWrongAnimal._type;
	return *this;
}
