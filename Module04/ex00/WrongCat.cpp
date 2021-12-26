//
// Created by atory on 26.12.2021.
//

#include "WrongCat.hpp"
#define COLOR_B     "\033[31m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

WrongCat::WrongCat(): WrongAnimal("a wrong cat") {
	std::cout << COLOR_B << "WRONG_CAT : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ DEF Constructor ]\n";
}

WrongCat::WrongCat(const std::string& type): WrongAnimal(type) {
	std::cout << COLOR_B << "WRONG_CAT : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ DEF Constructor ]\n";
}

WrongCat::WrongCat(const WrongCat &refWrongCat) {
	*this = refWrongCat;
	std::cout << COLOR_B << "WRONG_CAT : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ COPY Constructor ]\n";
}

WrongCat::~WrongCat() {
	std::cout << COLOR_B << "WRONG_CAT : " << this->_type + " " << COLOR_DEF;
	std::cout << "[ DEF Destructor ]\n";
}


/**
 * * * MEMBER FUNCTIONS
 */

void WrongCat::makeSound() const {
	std::cout << "- meow.\n";
}



/**
 * GETTERS / SETTERS / OVERLOADING
 */

WrongCat &WrongCat::operator=(const WrongCat &refWrongCat) {
	WrongAnimal::operator=(refWrongCat);
	return *this;
}
