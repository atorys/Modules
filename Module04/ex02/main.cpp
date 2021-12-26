//
// Created by atory on 26.12.2021.
//

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	{
//		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << "-----------------------------\n";

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
//		meta->makeSound();

		std::cout << "-----------------------------\n";
//		delete meta;
		delete j;
		delete i;
	}
	return 0;
}
