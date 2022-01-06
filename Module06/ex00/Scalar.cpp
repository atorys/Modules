//
// Created by atory on 06.01.2022.
//

#include "Scalar.hpp"
/*
 * CONSTRUCTOR / DESTRUCTOR / COPY CONSTRUCTOR
 */
Scalar::Scalar(std::string literal): _literal(literal) {}

Scalar::Scalar() {}

Scalar::Scalar(const Scalar &refOther) {
	*this = refOther;
}

Scalar::~Scalar() {}

/*
 * METHODS
 */

void Scalar::convert() const {
	std::string headers[4] = {"char",
							  "int",
							  "float",
							  "double" };

	void	(Scalar::*typeConverters[])(void) const = {&Scalar::_convertChar,
												 &Scalar::_convertInt,
												 &Scalar::_convertFloat,
												 &Scalar::_convertDouble };

	for (int idx = 0; idx < 4; idx++)
	{
		try {
			std::cout << headers[idx] << " : ";
			(this->*typeConverters[idx])();
		}
		catch (char const* e)
		{
			std::cout << e;
		}
	}
}

void Scalar::_convertChar() const {
	char ch;

	if (this->_literal.length() == 1 && this->containsChars())
		ch = static_cast<char>(this->_literal[0]);
	else if (!(this->containsChars()) && atoi(this->_literal.c_str()) >= 0 && atoi(this->_literal.c_str()) <= 127)
		ch = static_cast<char>(atoi(this->_literal.c_str()));
	else
		throw ("impossible\n");
	if (!isprint(ch))
		throw ("Non displayable\n");
	std::cout << "\'" << ch << "\'\n";
}

void Scalar::_convertInt() const {
	if (this->_literal.length() == 1 && this->containsChars()) {
		if (!std::isprint(this->_literal[0]))
			throw ("Non displayable\n");
		std::cout << static_cast<int>(this->_literal[0]) << "\n";
		return ;
	}
	else if (!(this->containsChars())) {
		std::cout << static_cast<int>(atoi(this->_literal.c_str())) << "\n";;
		return ;
	}
	throw ("impossible\n");
}

void Scalar::_convertFloat() const {
	float f;

	if (this->_literal.length() == 1 && this->containsChars()) {
		if (!std::isprint(this->_literal[0]))
			throw ("Non displayable\n");
		f = static_cast<float>(this->_literal[0]);
	}
	else if (this->_literal.length() > 0) {
		f = static_cast<float>(atof(this->_literal.c_str()));
	}
	else
		throw ("impossible\n");
	std::cout << f;
	if (f - static_cast<int>(f) == 0.000000)
		std::cout << ".0";
	std::cout << "f\n";
}

void Scalar::_convertDouble() const {
	double d;

	if (this->_literal.length() == 1 && this->containsChars()) {
		if (!std::isprint(this->_literal[0]))
			throw ("Non displayable\n");
		d = static_cast<float>(this->_literal[0]);
	}
	else if (this->_literal.length() > 0) {
		d = static_cast<float>(atof(this->_literal.c_str()));
	}
	else
		throw ("impossible\n");
	std::cout << d;
	if (d - static_cast<int>(d) == 0.)
		std::cout << ".0";
	std::cout << "\n";
}

int Scalar::containsChars() const {
	for (int i = 0; i < static_cast<int>(this->_literal.length()); i++)
		if (!std::isdigit(this->_literal[i]) && this->_literal[i] != '.' && this->_literal[i] != 'f')
			return 1;
	return 0;
}

/*
 * OVERLOADING
 */
Scalar& Scalar::operator=(const Scalar &refOther) {
	if (this == &refOther)
		return *this;
	this->_literal = refOther._literal;
	return *this;
}
