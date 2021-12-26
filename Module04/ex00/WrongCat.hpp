//
// Created by atory on 26.12.2021.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal {
public:
	WrongCat();
	WrongCat(const std::string& type);
	WrongCat(const WrongCat& refCat);
	virtual ~WrongCat();

	void makeSound(void) const;
	WrongCat&    operator=(const WrongCat& refCat);
};

#endif
