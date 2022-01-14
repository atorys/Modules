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
}

template <class T>
typename	MutantStack<T>::iterator 	MutantStack<T>::end(void) {
}

template <class T>
typename	MutantStack<T>::const_iterator 	MutantStack<T>::begin(void) const {
}

template <class T>
typename	MutantStack<T>::const_iterator 	MutantStack<T>::end(void) const {
}
