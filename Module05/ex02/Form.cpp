//
// Created by atory on 29.12.2021.
//

#include "Form.hpp"

/**
 *  CONSTRUCTOR & DESTRUCTOR & COPY CONSTRUCTOR
 */
Form::Form(): _name("no name"), _sign(false), _grade2sign(1), _grade2exec(1) {
	std::cout << "[ DEF Constructor ] : FORM\n";
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) \
																	throw(Form::GradeTooHighException,
																			Form::GradeTooLowException) :
																	_name(name),
																	_sign(false),
																	_grade2sign(gradeSign),
																	_grade2exec(gradeExec)

{
	if (gradeExec < 1 || gradeSign < 1)
		throw (GradeTooHighException("\n"));
	else if (gradeExec > 150 || gradeSign > 150)
		throw (GradeTooLowException("\n"));
	std::cout << "[ DEF Constructor ] : FORM\n";
}

Form::Form(const Form &refForm): _grade2sign(refForm.getGradeSign()), _grade2exec(refForm.getExecSign()) {
	*this = refForm;
	std::cout << "[ COPY Constructor ] : FORM\n";
}

Form::~Form() {
	std::cout << "[ DEF Destructor ] : FORM\n";
}



/**
 * 	EXCEPTIONS HANDLERS
 */
Form::GradeTooHighException::GradeTooHighException(std::string reason) {
	this->_errorMessage = "grade is too high ";
	this->_errorMessage += reason;
}

Form::GradeTooLowException::GradeTooLowException(std::string reason) {
	this->_errorMessage = "grade is too low ";
	this->_errorMessage += reason;
}

Form::FormIsNotSigned::FormIsNotSigned() {
	this->_errorMessage = "form is not signed! \n";
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::FormIsNotSigned::~FormIsNotSigned() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
	return this->_errorMessage.c_str();
}

const char *Form::GradeTooHighException::what() const throw() {
	return this->_errorMessage.c_str();
}

const char *Form::FormIsNotSigned::what() const throw() {
	return this->_errorMessage.c_str();
}


/**
 * * * MEMBER FUNCTIONS
 */
void Form::beSigned(const Bureaucrat &refB) throw(Form::GradeTooLowException) {
	if (refB.getGrade() > this->_grade2sign) {
		GradeTooLowException	exc("for signing\n");

		std::cout << refB.getName() << " cannot sign " << this->getName() << " because " << exc.what();
		throw (exc);
	}
	if (this->_sign)
		std::cout << refB.getName() << " cannot sign " << this->getName() << " because form is already signed !\n";
	else
		std::cout << this->getName() << " is signed by " << refB.getName() << "\n";
	this->_sign = true;
}

void Form::execute(const Bureaucrat &executor) const throw(Form::GradeTooLowException, Form::FormIsNotSigned) {
	try {
		if (this->getExecSign() < executor.getGrade())
			throw (GradeTooLowException("for executing\n"));
		if (!(this->_sign))
			throw (FormIsNotSigned());
	}
	catch (std::exception &e)
	{
		std::cout << executor.getName() << " cannot execute " << this->getName() << " because " << e.what();
		throw ;
	}
	std::cout << this->getName() << " is executed by " << executor.getName() << "\n";
}

/**
 * GETTERS / SETTERS / OVERLOADING
 */

const std::string &Form::getName() const {
	return this->_name;
}

bool Form::getSign() const {
	return this->_sign;
}

unsigned int Form::getGradeSign() const {
	return this->_grade2sign;
}

unsigned int Form::getExecSign() const {
	return this->_grade2exec;
}

Form &Form::operator=(const Form &refForm) {
	if (this == &refForm)
		return *this;
	const_cast<std::string&>(this->_name) = refForm.getName();
	this->_sign = refForm.getSign();
//	this->_grade2sign = refForm.getGradeSign();
//	this->_grade2exec = refForm.getExecSign();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Form& ref) {
	out << ref.getName() << ", form sign: " << ref.getSign() << ", sign grade: ";
	out << ref.getGradeSign() << ", exec grade: " << ref.getExecSign() << "\n";
	return out;
}