//
// Created by atory on 30.12.2021.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& ref);
	~Intern();

	Form*	makeForm(std::string name, std::string target) throw (Intern::NoSuchFormException);

	/* Exception class*/
	class NoSuchFormException : public std::exception {
		std::string 	_errorMessage;
	public:
		NoSuchFormException();
		virtual ~NoSuchFormException() throw();

		virtual const char* what() const throw();
	};
	Intern&	operator=(const Intern& ref);
};

#endif
