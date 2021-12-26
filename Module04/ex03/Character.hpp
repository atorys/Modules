//
// Created by atory on 27.12.2021.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter {
	AMateria*	_equipment[4];
	std::string _name;
public:
	Character();
	Character(std::string const& name);
	Character(const Character& refCharacter);
	virtual ~Character();

	Character& operator=(const Character& refCharacter);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
