//
// Created by atory on 29.12.2021.
//

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"
class Form;

class ShruberryCreationForm: public Form {
	std::string		_target;
public:
	ShruberryCreationForm(const std::string & target);
	ShruberryCreationForm(const ShruberryCreationForm& ref);
	virtual ~ShruberryCreationForm();

	void execute(Bureaucrat const & executor) const throw(Form::GradeTooLowException,
															Form::FormIsNotSigned);

	/* Exception class */
	class CannotOpenFileException : public std::exception {
		std::string 	_errorMessage;
	public:
		CannotOpenFileException();
		virtual ~CannotOpenFileException() throw();

		virtual const char* what() const throw();
	};

	ShruberryCreationForm&	operator=(const ShruberryCreationForm& ref);
};

#endif
