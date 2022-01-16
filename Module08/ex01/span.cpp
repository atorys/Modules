//
// Created by atory on 08.01.2022.
//

#include "span.hpp"

/*
 * Constructor, Copy Constructor, Destructor
 */
Span::Span(unsigned int n): _size(0), _maxSize(n) {}

Span::Span(const Span &ref) {
	*this = ref;
}
Span::~Span() {}

/*
 * Methods
 */

void Span::addNumber(int number) throw(std::exception) {
	this->_size++;
	if (this->_size > this->_maxSize)
		throw std::out_of_range("Add number : couldn't add a number, span is full.\n");
	this->_set.insert(number);
}

//template <typename T>
//void Span::addNumber(const T& numbers) throw(std::exception) {
//	if ((numbers.size() + this->_size > this->_maxSize)) {
//		this->_set.insert(numbers.begin(), numbers.end() - (numbers.size() - this->_maxSize - this->_size));
//		this->_size += this->_maxSize - this->_size;
//		this->getSet();
//		throw std::out_of_range("Add number : couldn't add a number, span is full.\n");
//	}
//	this->_set.insert(numbers.begin(), numbers.end());
//	this->_size += numbers.size();
//}

int Span::shortestSpan() const throw(std::exception) {
	if (this->_size < 2)
		throw std::out_of_range("not enough data to analyze the shortest span.\n");

	std::multiset<int>::const_iterator i_min, i_next_min;

	i_min = std::min_element(this->_set.begin(), this->_set.end());
	i_next_min = std::upper_bound(this->_set.begin(), this->_set.end(), *i_min);

	if (i_next_min == this->_set.end())
		i_next_min = i_min;
	return (*i_next_min - *i_min);
}

int Span::longestSpan() const throw(std::exception) {
	if (this->_size < 2)
		throw std::out_of_range("not enough data to analyze the longest span.\n");

	std::multiset<int>::const_iterator	i_min, i_max;

	i_min = std::min_element(this->_set.begin(), this->_set.end());
	i_max = std::max_element(this->_set.begin(), this->_set.end());
	return (*i_max - *i_min);
}

void Span::getSet() const {
	std::cout << "[ ";
	std::multiset<int>::const_iterator i = this->_set.begin();
	while (i != this->_set.end())
		std::cout << *i++ << " ";
	std::cout << "]\n";
}

/*
 * Overloading
 */
Span &Span::operator=(const Span &ref) {
	if (this == &ref)
		return *this;
	this->_set.clear();
	std::copy(ref._set.begin(), ref._set.end(), std::inserter(this->_set, this->_set.begin()));
	this->_maxSize = ref._maxSize;
	this->_size = ref._size;
	return *this;
}