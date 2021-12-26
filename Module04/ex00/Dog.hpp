//
// Created by atory on 26.12.2021.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
public:
    Dog();
    Dog(const std::string& type);
    Dog(const Dog& refDog);
    virtual ~Dog();

    virtual void makeSound(void) const;
    Dog&    operator=(const Dog& refDog);
};

#endif
