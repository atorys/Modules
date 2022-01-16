//
// Created by atory on 08.01.2022.
//

#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include "iostream"

#include "list"
#include "vector"

int main() {
	std::cout << "------------------------------- LIST\n";
	{
		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "list top = " << list.back() << std::endl;
		list.pop_back();
		std::cout << "list size = " << list.size() << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		std::cout << "list : ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}

	std::cout << "------------------------------- MUTANT STACK TEST1\n";
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "mstack top = " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "mstack size = " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;

		std::cout << "mstack : ";
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}

	std::cout << "------------------------------- MUTANT STACK TEST 2\n";
	{
		MutantStack<std::string> str_stack;

		std::cout << "str_stack size = " << str_stack.size() << std::endl;
		str_stack.push("hello");
		str_stack.push("darkness");
		str_stack.push("my");
		str_stack.push("friend");
		std::cout << "str_stack size = " << str_stack.size() << std::endl;

		std::cout << "str_stack : ";
		MutantStack<std::string>::iterator it = str_stack.begin();
		MutantStack<std::string>::iterator ite = str_stack.end();
		while (it != ite) {
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;

		std::cout << "str_stack top = " << str_stack.top() << std::endl;
	}

	std::cout << "------------------------------- MUTANT STACK TEST 3\n";
	{
		MutantStack<char> ch_stack;

		std::cout << "ch_stack size = " << ch_stack.size() << std::endl;

		try
		{
			ch_stack.pop();
		}
		catch (std::out_of_range &e)
		{
			std::cout << e.what() << std::endl;
		}

		ch_stack.push('a');
		ch_stack.push('b');
		ch_stack.push('c');

		std::cout << *(ch_stack.begin()) << std::endl;
		std::cout << *(--ch_stack.end()) << std::endl;

		std::cout << "ch_stack size = " << ch_stack.size() << std::endl;
	}

	std::cout << "------------------------------- MUTANT STACK TEST 4\n";
	{
		MutantStack<int> mstack;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::stack<int> copy(mstack);
		std::cout << "copy size = " <<  copy.size() << std::endl;
		std::cout << "mstack size = " <<  mstack.size() << std::endl;

		mstack.pop();
		std::cout << "copy size = " <<  copy.size() << std::endl;
		std::cout << "mstack size = " <<  mstack.size() << std::endl;
	}
	return 0;
}
