//
// Created by atory on 27.12.2021.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	AMateria*	_sources[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& refSource);
	virtual ~MateriaSource();

	MateriaSource&	operator=(const MateriaSource& refSource);
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
