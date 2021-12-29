//
// Created by atory on 28.12.2021.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"
#include "Form.hpp"

class Form;

class Bureaucrat {
	const std::string 	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const & name, unsigned int grade) throw(Bureaucrat::GradeTooHighException,
																	Bureaucrat::GradeTooLowException);
	Bureaucrat(const Bureaucrat& refBur);
	~Bureaucrat();

	void signForm(Form& refForm) const;

	const std::string&	getName() const;
	void 				setName(const std::string& name);
	unsigned int		getGrade() const;

	class GradeTooHighException : public std::exception {
		std::string	_errorMessage;
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();

		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		std::string _errorMessage;
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();

		virtual const char*	what() const throw();
	};

	Bureaucrat& operator=(const Bureaucrat& refBur);
	Bureaucrat&	operator++();
	Bureaucrat&	operator--();
	Bureaucrat	operator++(int);
	Bureaucrat	operator--(int);
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat& ref);

#endif
