//
// Created by atory on 08.01.2022.
//

#include "mutantstack.hpp"

template <class T>
MutantStack<T>::MutantStack() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &stack) {
	*this = stack;
}

template <class T>
MutantStack<T>::~MutantStack() {}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &stack) {
	std::stack<T>::operator=(stack);
}

template <class T>
typename	MutantStack<T>::iterator	MutantStack<T>::begin(void) {
	return this->c.begin();
}

template <class T>
typename	MutantStack<T>::iterator 	MutantStack<T>::end(void) {
	return this->c.end();
}

template <class T>
typename	MutantStack<T>::const_iterator 	MutantStack<T>::begin(void) const {
	return this->c.begin();
}

template <class T>
typename	MutantStack<T>::const_iterator 	MutantStack<T>::end(void) const {
	return this->c.end();
}

template <class T>
void 	MutantStack<T>::pop() {
	if (this->size() == 0)
		throw std::out_of_range("mstack is empty !");
	std::stack<T>::pop();
}
