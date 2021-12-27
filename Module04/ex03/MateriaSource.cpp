//
// Created by atory on 27.12.2021.
//

#include "MateriaSource.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->_sources[i] = NULL;
	std::cout << "[ DEF Constructor ] MATERIA_SOURCE\n";
}

MateriaSource::MateriaSource(const MateriaSource &refSource) {
	std::cout << "[ COPY Constructor ] MATERIA_SOURCE\n";
	*this = refSource;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (this->_sources[i])
			delete this->_sources[i];
	std::cout << "[ DEF Destructor ] MATERIA_SOURCE\n";
}

/**
 * * * MEMBER FUNCTIONS
 */

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (this->_sources[i] == NULL && m != NULL) {
			this->_sources[i] = m;
			std::cout << "[ LEARN new materia : \'" << m->getType() << "\' ]\n";
			break ;
		}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++)
		if (this->_sources[i]->getType() == type) {
			std::cout << "[ CREATE new materia : \'" << type << "\' ]\n";
			return (this->_sources[i]->clone());
		}
	return 0;
}


/**
* GETTERS / SETTERS / OVERLOADING
*/

MateriaSource &MateriaSource::operator=(const MateriaSource &refSource) {
	if (this == &refSource)
		return *this;
	for (int i = 0; i < 4; i++)
		if (this->_sources[i]) {
			delete this->_sources[i];
		if (refSource._sources[i])
			this->_sources[i] = refSource._sources[i]->clone();
	}
	return *this;
}