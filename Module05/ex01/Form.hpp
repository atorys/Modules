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
public:
	Form();
	Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) \
														throw(Form::GradeTooLowException,
														Form::GradeTooHighException);
	Form(const Form& refForm);
	~Form();

	/* Getters */
	const std::string&	getName() const;
	bool				getSign() const;
	unsigned int		getGradeSign() const;
	unsigned int		getExecSign() const;

	void	beSigned(const Bureaucrat& refB) throw(Form::GradeTooLowException);

	/*
	 * Exception class
	 */
	class GradeTooHighException : public std::exception {
		std::string _errorMessage;
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();

		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception {
		std::string _errorMessage;
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();

		virtual const char*	what() const throw();
	};

	Form&	operator=(const Form& refForm);
};

std::ostream& operator<<(std::ostream &out, const Form& ref);

#endif
