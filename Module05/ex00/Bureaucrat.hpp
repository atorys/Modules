//
// Created by atory on 28.12.2021.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"

class Bureaucrat {
	const std::string 	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const & name, unsigned int grade);
	Bureaucrat(const Bureaucrat& refBur);
	~Bureaucrat();

	const std::string&	getName() const;
	unsigned int		getGrade() const;

	class GradeTooHighException : public std::exception {

	};
	class GradeTooLowException : public std::exception {

	};

	Bureaucrat& operator=(const Bureaucrat& refBur);
};

#endif
