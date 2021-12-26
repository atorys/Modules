//
// Created by atory on 25.12.2021.
//

#include "Animal.hpp"
#define COLOR_B     "\033[34m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Animal::Animal() {
    std::cout << COLOR_B << "ANIMAL : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

Animal::Animal(const std::string &type): _type(type) {
    std::cout << COLOR_B << "ANIMAL : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

Animal::Animal(const Animal &refAnimal) {
    *this = refAnimal;
    std::cout << COLOR_B << "ANIMAL : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

Animal::~Animal() {
    std::cout << COLOR_B << "ANIMAL : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}

/**
 * * * MEMBER FUNCTIONS
 */

void Animal::makeSound() const {
    std::cout << "- unknown sound of unknown animal.\n";
}


/**
 * GETTERS / SETTERS / OVERLOADING
 */

const std::string &Animal::getType() const {
    return this->_type;
}

Animal &Animal::operator=(const Animal &refAnimal) {
    std::cout << "[ Assignation operator called ]\n";
    if (this == &refAnimal)
        return *this;
    this->_type = refAnimal._type;
    return *this;
}
