//
// Created by atory on 26.12.2021.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice: public AMateria {
public:
	Ice();
	Ice(std::string const &type);
	Ice(const Ice& refIce);
	virtual ~Ice();

	Ice&	operator=(const Ice& refIce);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
