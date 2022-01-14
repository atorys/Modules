//
// Created by atory on 08.01.2022.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "stack"
#include "queue"

template <class T>
class MutantStack : public std::stack<T> {
public:
	MutantStack();
	MutantStack(const MutantStack& stack);
	virtual ~MutantStack();

	typedef 		typename std::stack<T>::container_type::iterator		iterator;
	typedef 		typename std::stack<T>::container_type::const_iterator	const_iterator;

	iterator 		begin(void);
	iterator 		end(void);

	const_iterator 	begin(void) const;
	const_iterator 	end(void) const;

	MutantStack&	operator=(const MutantStack& stack);
};

#endif
