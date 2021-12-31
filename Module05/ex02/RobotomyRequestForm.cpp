//
// Created by atory on 30.12.2021.
//

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#define COLOR_B     "\033[35m"
#define COLOR_DEF   "\033[0m"

/*
 * CONSTRUCTOR / DESTRUCTOR / COPY CONSTRUCTOR
 */

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form(target + "_form",
																		  72,
																		  45),
																		  _target(target)
{
	std::cout << "[ DEF Constructor ] : ROBOTOMY_REQUEST_FORM\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref): Form(ref)
{
	*this = ref;
	std::cout << "[ COPY Constructor ] : ROBOTOMY_REQUEST_FORM\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[ DEF Destructor ] : ROBOTOMY_REQUEST_FORM\n";
}

/*
 * * * MEMBER FUNCTIONS
 */

void RobotomyRequestForm::execute(const Bureaucrat &executor) const throw(class Form::GradeTooLowException,
																			class Form::FormIsNotSigned)
{
	Form::execute(executor);
//	std::cout <<"[ Action: Makes some drilling noises, and tell us that " << this->_target;
//	std::cout << " has been robotomized successfully 50% of the time. ]\n";

	std::cout << COLOR_B << "* BEEEEEEP *\n";
	std::srand(time(0));
	int	success = (std::rand() % 100 + 1);
	std::cout << "Success percentage : " << success << "%\n";
	if (success > 50)
		std::cout << this->_target << " has been robotomized successfully!\n";
	else
		std::cout << this->_target << " hasn't been robotomized this time!\n";
	std::cout << COLOR_DEF;
}

/*
 * GETTERS / SETTERS / OVERLOADING
 */
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
	Form::operator=(ref);
	this->_target = ref._target;
	return *this;
}