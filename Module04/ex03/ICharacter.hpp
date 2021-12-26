//
// Created by atory on 27.12.2021.
//

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class AMateria;
#include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
