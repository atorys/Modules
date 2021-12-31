//
// Created by atory on 30.12.2021.
//

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
 * CONSTRUCTOR / DESTRUCTOR / COPY CONSTRUCTOR
 */

Intern::Intern() {
	std::cout << "[ DEF Constructor ] : INTERN\n";
}

Intern::Intern(const Intern &ref) {
	*this = ref;
	std::cout << "[ COPY Constructor ] : INTERN\n";
}

Intern::~Intern() {
	std::cout << "[ DEF Destructor ] : INTERN\n";
}

/*
 * 	EXCEPTIONS HANDLERS
 */
Intern::NoSuchFormException::NoSuchFormException() {
	this->_errorMessage = "such form template does not exist!\n";
}
Intern::NoSuchFormException::~NoSuchFormException() throw() {}

const char *Intern::NoSuchFormException::what() const throw() {
	return this->_errorMessage.c_str();
}


/*
 * * * MEMBER FUNCTIONS
 */

Form*	Intern::makeForm(std::string name, std::string target) throw (Intern::NoSuchFormException) {
	std::string forms[3] = {"robotomy request",
							"shruberry creation",
							"presidential pardon" };
	int idx;
	for (idx = 0; idx < 3 && forms[idx] != name; idx++) {};
	switch (idx)
	{
		case (0):
			return (new RobotomyRequestForm(target));
		case (1):
			return (new ShruberryCreationForm(target));
		case (2):
			return (new PresidentialPardonForm(target));
		default:
			throw (NoSuchFormException());
	}
}

/*
 * GETTERS / SETTERS / OVERLOADING
 */

Intern &Intern::operator=(const Intern &ref) {
	if (this == &ref)
		return *this;
	return *this;
}