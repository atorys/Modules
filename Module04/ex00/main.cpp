//
// Created by atory on 25.12.2021.
//

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void) {
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << "-----------------------------\n";

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << "-----------------------------\n";
		delete meta;
		delete j;
		delete i;
		std::cout << "\n\n\n";
	}

	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();

		std::cout << "-----------------------------\n";

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //won't output the cat sound!
		meta->makeSound();

		std::cout << "-----------------------------\n";
		delete meta;
		delete i;
	}
    return 0;
}
