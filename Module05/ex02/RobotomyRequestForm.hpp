//
// Created by atory on 30.12.2021.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class Form;

class RobotomyRequestForm : public Form {
	std::string		_target;
public:
	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(const RobotomyRequestForm& ref);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const throw(Form::GradeTooLowException,
																Form::FormIsNotSigned);

	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
};

#endif
