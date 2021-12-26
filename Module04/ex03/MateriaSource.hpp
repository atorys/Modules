//
// Created by atory on 27.12.2021.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
