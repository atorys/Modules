//
// Created by atory on 26.12.2021.
//

#include "Brain.hpp"
#define COLOR_B     "\033[32m"
#define COLOR_DEF   "\033[0m"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		_idea[i] = "idea";
	std::cout << COLOR_B << "BRAIN : " << COLOR_DEF;
	std::cout << "[ DEF Constructor ]\n";
}

Brain::Brain(const std::string ideas) {
	for (int i = 0; i < 100; i++)
		_idea[i] = ideas;
	std::cout << COLOR_B << "BRAIN : " << COLOR_DEF;
	std::cout << "[ DEF Constructor ]\n";
}

Brain::~Brain() {
	std::cout << COLOR_B << "BRAIN : " <<  COLOR_DEF;
	std::cout << "[ DEF Destructor ]\n";
}

Brain::Brain(const Brain &refBrain) {
	*this = refBrain;
	std::cout << COLOR_B << "BRAIN : " << COLOR_DEF;
	std::cout << "[ COPY Constructor ]\n";
}

/**
 * GETTERS / SETTERS / OVERLOADING
 */

Brain &Brain::operator=(const Brain &refBrain) {
	std::cout << COLOR_B  << "[ Assignation operator called ]\n" << COLOR_DEF;
	if (this == &refBrain)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_idea[i] = refBrain._idea[i];
	return *this;
}
