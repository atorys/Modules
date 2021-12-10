//
// Created by Achiote Tory on 12/10/21.
//

#include <iostream>
#include "Karen.hpp"

int main(void)
{
	Karen myKaren;

	myKaren.complain("INFO");
	std::cout << std::endl;

	myKaren.complain("CALMDOWN");
	std::cout << std::endl;

	myKaren.complain("DEBUG");
	std::cout << std::endl;

	myKaren.complain("ERROR");
	std::cout << std::endl;

	myKaren.complain("WARNING");
	std::cout << std::endl;

	myKaren.complain("ATTACK");
	return (0);
}
