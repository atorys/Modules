//
// Created by atory on 28.12.2021.
//

#include "Bureaucrat.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Bureaucrat::Bureaucrat(): _name("no name"), _grade(150) {
	std::cout << "[ DEF Constructor ] : BUREAUCRAT\n";
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) \
															throw(Bureaucrat::GradeTooHighException,
															Bureaucrat::GradeTooLowException) :
															_name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
	std::cout << "[ DEF Constructor ] : BUREAUCRAT\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &refBur) {
	*this = refBur;
	std::cout << "[ COPY Constructor ] : BUREAUCRAT\n";
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[ DEF Destructor ] : BUREAUCRAT\n";
}

/**
 * * * MEMBER FUNCTIONS
 */

void Bureaucrat::signForm(Form &refForm) const {
	refForm.beSigned(*this);
}


/**
 * EXCEPTION HANDLING
 */

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	this->_errorMessage = "grade is too low ! \n";
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	this->_errorMessage = "grade is too high ! \n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return this->_errorMessage.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return this->_errorMessage.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}



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
	if (this == &refBur)
		return *this;
	const_cast<std::string&>(this->_name) = refBur.getName();
	this->_grade = refBur.getGrade();
	return *this;
}

Bureaucrat &Bureaucrat::operator++() {
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
	return *this;
}

Bureaucrat &Bureaucrat::operator--() {
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade++;
	return *this;
}

Bureaucrat Bureaucrat::operator++(int) {
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	Bureaucrat	tmp(*this);

	--(*this);
	return tmp;
}

Bureaucrat Bureaucrat::operator--(int) {
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	Bureaucrat tmp(*this);

	++(*this);
	return tmp;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& ref) {
	out << ref.getName() << ", bureaucrat grade " << ref.getGrade() << "\n";
	return out;
}
