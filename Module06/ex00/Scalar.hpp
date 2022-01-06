//
// Created by atory on 06.01.2022.
//

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include "iostream"
#include "stdlib.h"

class Scalar {
	std::string	_literal;
	void		_convertChar(void) const;
	void		_convertInt(void) const;
	void 		_convertFloat(void) const;
	void 		_convertDouble(void) const;
	Scalar();
public:
	Scalar(std::string literal);
	Scalar(const Scalar& refOther);
	~Scalar();

	void	convert(void) const;
	int 	containsChars() const;
	Scalar&	operator=(const Scalar& refOther);
};

#endif
