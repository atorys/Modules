//
// Created by atory on 07.01.2022.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "cstdlib"
#include "iostream"

/*
 * Template class ARRAY
 */
template <typename T>
class Array {
	T*		_head;
	size_t	_size;
public:
	Array();
	Array(unsigned int n);
	Array(const Array& array);
	~Array();

	size_t 	size() const;
	Array&	operator=(const Array& array);
	T&		operator[](const size_t index) const throw(std::exception);
};

/*
 * Constructor, Copy Constructor, Destructor
 */
template <typename T>
Array<T>::Array(): _head(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n): _head(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array<T> &array): _head(nullptr) {
	*this = array;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->_head;
}

/*
 * Methods
 */

template <typename T>
size_t Array<T>::size() const {
	return this->_size;
}

/*
 * Overloading
 */
template <typename T>
T& Array<T>::operator[](const size_t index) const throw(std::exception) {
	if (index < 0 || index >= this->_size)
		throw (std::out_of_range("index out of range !\n"));
	return this->_head[index];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T> &array) {
	if (this == &array)
		return *this;
	delete [] this->_head;
	this->_size = array._size;
	this->_head = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
		this->_head[i] = array._head[i];
	return *this;
}

#endif
