//
// Created by atory on 26.12.2021.
//

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define ARRAY_LEN	4

void createAnimalArray(Animal*	animals[])
{
	for (int i = 0; i < ARRAY_LEN; i++)
	{
		if (i < ARRAY_LEN / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
}

void deleteAnimalArray(Animal*	animals[])
{
	for (int i = 0; i < ARRAY_LEN; i++)
		delete animals[i];
}

int main(void) {
	std::cout << "		TEST 1\n";
	std::cout << "---------------------------------------\n";
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		i->makeSound(); //will output the cat sound!
		j->makeSound();

		delete j;//should not create a leak
		delete i;
	}

	std::cout << "		TEST 2\n";
	std::cout << "---------------------------------------\n";
	{
		Animal*	animals[ARRAY_LEN];

		createAnimalArray(animals);
		animals[1]->makeSound();
		animals[3]->makeSound();

		deleteAnimalArray(animals);
	}

	std::cout << "		TEST 3\n";
	std::cout << "---------------------------------------\n";
	{
		Dog dog;
		Dog tmp = dog;
	}
	return 0;
}
