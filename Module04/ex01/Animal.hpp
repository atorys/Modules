//
// Created by atory on 25.12.2021.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string &type);
    Animal(const Animal &refAnimal);
    virtual ~Animal();

    virtual void makeSound(void) const;
    std::string const &getType() const;
    Animal& operator=(const Animal &refAnimal);
};

#endif
