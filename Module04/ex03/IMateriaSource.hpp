//
// Created by atory on 27.12.2021.
//

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class AMateria;
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
