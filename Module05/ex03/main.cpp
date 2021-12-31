//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#define COLOR_B "\033[31m"
#define COLOR_DEF "\033[0m"

int main() {
	std::cout << "-----------------------------TEST1\n";

	Bureaucrat	steeve("Steeve", 1);
	Intern 		someRandomIntern;

	try {
		Form* rrf; // robotomy request

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		steeve.signForm(*rrf);
		steeve.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST2\n";
	try {
		Form* ppr; // "presidential pardon

		ppr = someRandomIntern.makeForm("presidential pardon", "kitty");
		steeve.signForm(*ppr);
		steeve.executeForm(*ppr);

		delete ppr;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST3\n";
	try {
		Form* scf; // shrubbery creation

		scf = someRandomIntern.makeForm("my new form", "home");
		steeve.signForm(*scf);
		steeve.executeForm(*scf);

		delete scf;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
}
