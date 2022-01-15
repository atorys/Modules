//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#define COLOR_B "\033[31m"
#define COLOR_DEF "\033[0m"

int main() {
	std::cout << "-----------------------------TEST1\n";
	try
	{
		Bureaucrat good("good guy", 1);
		Form form("new form", 3, 3);

		std::cout << good;
		std::cout << form << '\n';

		good.signForm(form);
		good.signForm(form);
		std::cout << form << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST2\n";
	try
	{
		Bureaucrat poor("poor guy", 40);
		Form form("new form", 3, 3);

		std::cout << poor;
		std::cout << form << "\n";

		poor.signForm(form);
		std::cout << form << "\n";
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "\n-----------------------------TEST3\n";
	try
	{
		Form form1("1st form", 3, 3);
		Form form2(form1);
		Form form3("3rd form", 100, 100);

		std::cout << form1;
		std::cout << form2;
		std::cout << form3;

		form3 = form1;
		std::cout << form3;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
}
