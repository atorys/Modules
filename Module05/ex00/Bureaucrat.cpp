//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Bureaucrat::Bureaucrat(): _name("no name"), _grade(150) {
	std::cout << "[ DEF Constructor ]\n";
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade): _name(name) {
//	try {
//		if (grade < 1)
//			throw std::exception ;
//	}
	std::cout << "[ DEF Constructor ]\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &refBur) {
	*this = refBur;
	std::cout << "[ COPY Constructor ]\n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[ DEF Destructor ]\n";
}

/**
 * * * MEMBER FUNCTIONS
 */


/**
 * GETTERS / SETTERS / OVERLOADING
 */

const std::string &Bureaucrat::getName() const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &refBur) {
	if (this = &refBur)
		return *this;
	const_cast<const std::string>(this->_name) = refBur.getName();
	this->_grade = refBur.getGrade();
	return *this;
}
