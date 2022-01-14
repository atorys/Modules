//
// Created by atory on 08.01.2022.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include "algorithm"
#include "set"
#include "vector"

class Span {
private:
	std::multiset<int>	_set;
	unsigned int		_size;
	unsigned int		_maxSize;
public:
	Span(unsigned int n);
	Span(const Span& ref);
	~Span();

	void 	addNumber(int number) throw(std::exception);
	template <typename T> void	addNumber(const T& numbers) throw(std::exception);
	int 	shortestSpan() const throw(std::exception);
	int 	longestSpan() const throw(std::exception);
	void 	getSet() const;
	Span&	operator=(const Span& ref);
};

template <typename T>
void Span::addNumber(const T& numbers) throw(std::exception) {
	if ((numbers.size() + this->_size > this->_maxSize)) {
		this->_set.insert(numbers.begin(), numbers.end() - (numbers.size() - this->_maxSize - this->_size));
		this->_size += this->_maxSize - this->_size;
		this->getSet();
		throw std::out_of_range("Add number : couldn't add a number, span is full.\n");
	}
	this->_set.insert(numbers.begin(), numbers.end());
	this->_size += numbers.size();
}

#endif
