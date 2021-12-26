//
// Created by atory on 26.12.2021.
//


#include "Dog.hpp"
#define COLOR_B     "\033[36m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

Dog::Dog(): Animal("a dog") {
    std::cout << COLOR_B << "DOG : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

Dog::Dog(const std::string& type): Animal(type) {
    std::cout << COLOR_B << "DOG : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Constructor ]\n";
}

Dog::Dog(const Dog &refDog) {
    *this = refDog;
    std::cout << COLOR_B << "DOG : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ COPY Constructor ]\n";
}

Dog::~Dog() {
    std::cout << COLOR_B << "DOG : " << this->_type + " " << COLOR_DEF;
    std::cout << "[ DEF Destructor ]\n";
}


/**
 * * * MEMBER FUNCTIONS
 */

void Dog::makeSound() const {
    std::cout << "- wuf.\n";
}



/**
 * GETTERS / SETTERS / OVERLOADING
 */

Dog &Dog::operator=(const Dog &refDog) {
    Animal::operator=(refDog);
    return *this;
}
