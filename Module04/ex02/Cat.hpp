//
// Created by atory on 26.12.2021.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public Animal {
	Brain*	_brains;
public:
    Cat();
    Cat(const std::string& type);
    Cat(const Cat& refCat);
    virtual ~Cat();

    virtual void makeSound(void) const;
    Cat&    operator=(const Cat& refCat);
};

#endif
