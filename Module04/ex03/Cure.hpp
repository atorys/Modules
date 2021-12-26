//
// Created by atory on 27.12.2021.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure: public AMateria {
public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure& refIce);
	virtual ~Cure();

	Cure&	operator=(const Cure& refCure);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
