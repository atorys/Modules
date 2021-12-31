//
// Created by atory on 29.12.2021.
//

#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	const std::string	_name;
	bool				_sign;
	const unsigned int	_grade2sign;
	const unsigned int	_grade2exec;
	Form();
public:
	Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) \
														throw(Form::GradeTooLowException,
														Form::GradeTooHighException);
	Form(const Form& refForm);
	virtual ~Form();

	/* Getters */
	const std::string&	getName() const;
	bool				getSign() const;
	unsigned int		getGradeSign() const;
	unsigned int		getExecSign() const;

	void			beSigned(const Bureaucrat& refB) throw(Form::GradeTooLowException);
	virtual void 	execute(Bureaucrat const & executor) const throw(Form::GradeTooLowException,
																	Form::FormIsNotSigned);

	/*
	 * Exception class
	 */
	class GradeTooHighException : public std::exception {
		std::string _errorMessage;
	public:
		GradeTooHighException(std::string reason);
		virtual ~GradeTooHighException() throw();

		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {
		std::string _errorMessage;
	public:
		GradeTooLowException(std::string reason);
		virtual ~GradeTooLowException() throw();

		virtual const char*	what() const throw();
	};

	class FormIsNotSigned : public	std::exception {
		std::string _errorMessage;
	public:
		FormIsNotSigned();
		virtual ~FormIsNotSigned() throw();

		virtual const char* what() const throw();
	};

	Form&	operator=(const Form& refForm);
};

std::ostream& operator<<(std::ostream &out, const Form& ref);

#endif
