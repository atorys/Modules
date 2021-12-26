//
// Created by atory on 26.12.2021.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"

class ICharacter;
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string		_type;
	AMateria(std::string const & type);
public:
	AMateria();
	AMateria(const AMateria& refMateria);
	virtual ~AMateria();

	AMateria&	operator=(const AMateria& refMateria);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
