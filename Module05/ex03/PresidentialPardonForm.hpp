//
// Created by atory on 30.12.2021.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
class Form;

class PresidentialPardonForm: public Form {
	std::string		_target;
public:
	PresidentialPardonForm(const std::string & target);
	PresidentialPardonForm(const PresidentialPardonForm& ref);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const throw(Form::GradeTooLowException,
																Form::FormIsNotSigned);

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& ref);
};

#endif
