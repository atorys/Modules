//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"
#define COLOR_B "\033[31m"
#define COLOR_DEF "\033[0m"

int main() {
	std::cout << "-----------------------------TEST1\n";
	try
	{
		Bureaucrat one("error one", 0);
		std::cout << one;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "-----------------------------TEST2\n";
	try
	{
		Bureaucrat two("error one", 999);
		std::cout << two;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}

	std::cout << "-----------------------------TEST3\n";
	try
	{
		Bureaucrat three("good one", 2);
		std::cout << three;
		std::cout << ++three;
		std::cout << ++three;
	}
	catch (std::exception &e)
	{
		std::cout << COLOR_B << "Error : " << e.what() << COLOR_DEF;
	}
}