//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define COLOR_B "\033[31m"
#define COLOR_DEF "\033[0m"

int main() {
	std::cout << "-----------------------------TEST1\n";
	try
	{
		Bureaucrat 				good("good guy", 1);
		ShruberryCreationForm	SCForm("home");

		std::cout << good;
		std::cout << SCForm << '\n';

		good.signForm(SCForm);
		std::cout << SCForm << '\n';
		good.executeForm(SCForm);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST2\n";
	try
	{
		Bureaucrat guy("guy", 30);
		RobotomyRequestForm RRform("kitty");

		std::cout << guy;
		std::cout << RRform << "\n";

		guy.signForm(RRform);
		std::cout << RRform << "\n";
		guy.executeForm(RRform);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST3\n";
	try
	{
		Bureaucrat guy("guy", 10);
		PresidentialPardonForm PPform("kitty");

		std::cout << guy;
		std::cout << PPform << "\n";

		guy.signForm(PPform);
		std::cout << PPform << "\n";
		guy.executeForm(PPform);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST4\n";
	try
	{
		Bureaucrat guy("guy", 5);
		PresidentialPardonForm PPform("kitty");

		std::cout << guy;
		std::cout << PPform << "\n";

		guy.signForm(PPform);
		std::cout << PPform << "\n";
		guy.executeForm(PPform);
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
}
