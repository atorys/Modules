//
// Created by atory on 26.12.2021.
//

#include "Cat.hpp"
#define COLOR_B     "\033[35m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

Cat::Cat(): Animal("a cat") {
    std::cout << COLOR_B << "CAT : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

Cat::Cat(const std::string& type): Animal(type) {
    std::cout << COLOR_B << "CAT : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

Cat::Cat(const Cat &refCat) {
    *this = refCat;
    std::cout << COLOR_B << "CAT : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

Cat::~Cat() {
    std::cout << COLOR_B << "CAT : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}


/**
 * * * MEMBER FUNCTIONS
 */

void Cat::makeSound() const {
    std::cout << "- meow.\n";
}



/**
 * GETTERS / SETTERS / OVERLOADING
 */

Cat &Cat::operator=(const Cat &refCat) {
    Animal::operator=(refCat);
    return *this;
}
