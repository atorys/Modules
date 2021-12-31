//
// Created by atory on 30.12.2021.
//

#include "PresidentialPardonForm.hpp"
#define COLOR_B     "\033[33m"
#define COLOR_DEF   "\033[0m"

/*
 * CONSTRUCTOR / DESTRUCTOR / COPY CONSTRUCTOR
 */

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form(target + "_form",
																		  25,
																		  5),
																	 		_target(target)
{
	std::cout << "[ DEF Constructor ] : PRESIDENTIAL_PARDON_FORM\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref): Form(ref)
{
	*this = ref;
	std::cout << "[ COPY Constructor ] : PRESIDENTIAL_PARDON_FORM\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[ DEF Destructor ] : PRESIDENTIAL_PARDON_FORM\n";
}

/*
 * * * MEMBER FUNCTIONS
 */

void PresidentialPardonForm::execute(const Bureaucrat &executor) const throw(class Form::GradeTooLowException,
																				class Form::FormIsNotSigned)
{
	Form::execute(executor);
	std::cout << COLOR_B;
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.\n";
	std::cout << COLOR_DEF;
}

/*
 * GETTERS / SETTERS / OVERLOADING
 */
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref) {
	Form::operator=(ref);
	this->_target = ref._target;
	return *this;
}
