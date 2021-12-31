//
// Created by atory on 29.12.2021.
//

#include "ShruberryCreationForm.hpp"
#define COLOR_B     "\033[34m"
#define COLOR_DEF   "\033[0m"

/*
 * CONSTRUCTOR / DESTRUCTOR / COPY CONSTRUCTOR
 */

ShruberryCreationForm::ShruberryCreationForm(const std::string &target): Form(target +"_form",
																		145,
																		137),
																		_target(target + "_shruberry")
{
	std::cout << "[ DEF Constructor ] : SHRUBERRY_CREATION_FORM\n";
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &ref): Form(ref) {
	*this = ref;
	std::cout << "[ COPY Constructor ] : SHRUBERRY_CREATION_FORM\n";
}

ShruberryCreationForm::~ShruberryCreationForm() {
	std::cout << "[ DEF Destructor ] : SHRUBERRY_CREATION_FORM\n";
}

/*
 * 	EXCEPTIONS HANDLERS
 */

ShruberryCreationForm::CannotOpenFileException::CannotOpenFileException() {
	this->_errorMessage = "shruberry form cannot open the file ! \n";
}

ShruberryCreationForm::CannotOpenFileException::~CannotOpenFileException() throw() {}

const char *ShruberryCreationForm::CannotOpenFileException::what() const throw() {
	return this->_errorMessage.c_str();
}

/*
 * * * MEMBER FUNCTIONS
 */

void ShruberryCreationForm::execute(const Bureaucrat &executor) const throw(class Form::GradeTooLowException,
																			class Form::FormIsNotSigned)
{
	Form::execute(executor);
	std::cout << COLOR_B;
	std::cout << "[ Action: Create a file called "  << this->_target;
	std::cout << ", and write ASCII trees inside it, in the current directory. ]\n";
	std::cout << COLOR_DEF;

	std::ofstream outfile(this->_target.c_str());
	if (!outfile.is_open())
		throw (ShruberryCreationForm::CannotOpenFileException());
	outfile << "          &&& &&  & &&\n"
			   "      && &\\/&\\|& ()|/ @, &&\n"
			   "      &\\/(/&/&||/& /_/)_&/_&\n"
			   "   &() &\\/&|()|/&\\/ '%\" & ()\n"
			   "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
			   "&&   && & &| &| /& & % ()& /&&\n"
			   " ()&_---()&\\&\\|&&-&&--%---()~\n"
			   "     &&     \\|||\n"
			   "             |||\n"
			   "             |||\n"
			   "             |||\n"
			   "       , -=-~  .-^- _\n"
			   "ejm97  ";
	outfile.close();
}

/*
 * GETTERS / SETTERS / OVERLOADING
 */

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &ref) {
	Form::operator=(ref);
	this->_target = ref._target;
	return *this;
}
