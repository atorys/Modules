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
		throw (GradeTooHighException());
	else if (gradeExec > 150 || gradeSign > 150)
		throw (GradeTooLowException());
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
Form::GradeTooHighException::GradeTooHighException() {
	this->_errorMessage = "Grade is too high for signing! \n";
}

Form::GradeTooLowException::GradeTooLowException() {
	this->_errorMessage = "Grade is too low for signing! \n";
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
	return this->_errorMessage.c_str();
}

const char *Form::GradeTooHighException::what() const throw() {
	return this->_errorMessage.c_str();
}


/**
 * * * MEMBER FUNCTIONS
 */
void Form::beSigned(const Bureaucrat &refB) throw(Form::GradeTooLowException) {
	if (refB.getGrade() > this->_grade2sign) {
		GradeTooLowException	exc;
		std::cout << refB.getName() << " cannot sign " << this->getName() << " because " << exc.what();
		throw (exc);
	}
	if (this->_sign)
		std::cout << refB.getName() << " cannot sign " << this->getName() << " because form is already signed !\n";
	else
		std::cout << this->getName() << " is signed by " << refB.getName() << "\n";
	this->_sign = true;
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