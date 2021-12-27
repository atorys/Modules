//
// Created by atory on 26.12.2021.
//

#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		std::cout << "\n";

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		std::cout << "\n";

		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << "\n";

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << "\n";
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "-------------------------------------\n";
	{
		Character *me = new Character("me");
		Character *bob = new Character("bob");
		me->equip(new Ice());
		Character *clone = new Character(*me);
		std::cout << "\n";

		clone->use(0, *me);
		delete me;
		clone->use(0, *bob);
		clone->use(1, *bob);
	}
	return 0;
}
