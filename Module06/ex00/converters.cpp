//
// Created by atory on 30.12.2021.
//

#include "stdlib.h"
#include "iostream"

int containsChars(std::string literal) {
	for (int i = 0; i < (int)literal.length(); i++)
		if (!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
			return 1;
	return 0;
}

void	convertChar(std::string literal) {
	char ch;

	if (literal.length() == 1 && containsChars(literal))
		ch = static_cast<char>(literal[0]);
	else if (!containsChars(literal) && atoi(literal.c_str()) >= 0 && atoi(literal.c_str()) <= 127)
		ch = static_cast<char>(atoi(literal.c_str()));
	else
		throw ("impossible\n");
	if (!isprint(ch))
		throw ("Non displayable\n");
	std::cout << "\'" << ch << "\'\n";cd
}

void	convertInt(std::string literal)
{
	if (literal.length() == 1 && containsChars(literal)) {
		if (!std::isprint(literal[0]))
			throw ("Non displayable\n");
		std::cout << static_cast<int>(literal[0]) << "\n";
		return ;
	}
	else if (!containsChars(literal)) {
		std::cout << static_cast<int>(atoi(literal.c_str())) << "\n";;
		return ;
	}
	throw ("impossible\n");
}
void	convertFloat(std::string literal)
{
	float f;
	if (literal.length() == 1 && containsChars(literal)) {
		if (!std::isprint(literal[0]))
			throw ("Non displayable\n");
		f = static_cast<float>(literal[0]);
	}
	else if (literal.length() > 0) {
		f = static_cast<float>(atof(literal.c_str()));
	}
	else
		throw ("impossible\n");
	std::cout << f;
	if (f - static_cast<int>(f) == 0.000000)
		std::cout << ".0";
	std::cout << "f\n";
}

void	convertDouble(std::string literal)
{
	double d;
	if (literal.length() == 1 && containsChars(literal)) {
		if (!std::isprint(literal[0]))
			throw ("Non displayable\n");
		d = static_cast<float>(literal[0]);
	}
	else if (literal.length() > 0) {
		d = static_cast<float>(atof(literal.c_str()));
	}
	else
		throw ("impossible\n");
	std::cout << d;
	if (d - static_cast<int>(d) == 0.)
		std::cout << ".0";
	std::cout << "\n";
}
