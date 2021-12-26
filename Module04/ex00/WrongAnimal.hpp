//
// Created by atory on 26.12.2021.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class   WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &refWrongAnimal);
	virtual ~WrongAnimal();

	void makeSound(void) const;
	std::string const &getType() const;
	WrongAnimal& operator=(const WrongAnimal &refWrongAnimal);
};

#endif
