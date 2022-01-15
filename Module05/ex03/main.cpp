//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#define COLOR_B "\033[31m"
#define COLOR_DEF "\033[0m"

int main() {

	Bureaucrat	steeve("Steeve", 100);
	Intern 		someRandomIntern;


	std::cout << "-----------------------------TEST1\n";

	Form* rrf; // robotomy request
	try {
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf;

		steeve.signForm(*rrf);
		steeve.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
	delete rrf;


	std::cout << "\n-----------------------------TEST2\n";

	Form* ppr; // "presidential pardon
	try {
		ppr = someRandomIntern.makeForm("presidential pardon", "kitty");
		std::cout << *ppr;

		steeve.signForm(*ppr);
		steeve.executeForm(*ppr);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
	delete ppr;


	std::cout << "\n-----------------------------TEST3\n";

	Form* scf; // shrubbery creation
	try {
		scf = someRandomIntern.makeForm("my new form", "home");

		steeve.signForm(*scf);
		steeve.executeForm(*scf);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
	delete scf;
}
