//
// Created by atory on 07.01.2022.
//

#include "span.hpp"

int main() {
	std::cout << "------------------------------- TEST 1\n";
	try {
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 2\n";
	try {
		Span sp = Span(3);

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);

		sp.getSet();

		sp.addNumber(4); /* Span is already full here */

		sp.getSet();
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 3\n";
	try {
		Span sp = Span(5);
		sp.getSet();
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 4\n";
	try {
		Span sp = Span(10);

		sp.addNumber(1);
		sp.addNumber(5);
		sp.addNumber(1);
		sp.addNumber(100);
		sp.addNumber(11);
		sp.addNumber(1);

		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 5\n";
	try {
		Span sp = Span(10);

		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);
		sp.addNumber(1);

		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 6\n";
	try {
		Span sp = Span(10);

		sp.addNumber(-21);
		sp.addNumber(-1);
		sp.addNumber(15);
		sp.addNumber(42);

		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 7\n";
	try {
		Span sp = Span(10);
		std::vector<int> vector;

		for (int i = 10; i > 0; i--)
			vector.push_back(i);
		vector[5] = 96;
		vector[0] = 34;

		sp.addNumber(vector);
		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 8\n";
	try {
		Span sp = Span(5);
		std::vector<int> vector;

		for (int i = 10; i > 0; i--)
			vector.push_back(i);
		vector[5] = 96;
		vector[0] = 34;

		sp.addNumber(vector);
		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

	std::cout << "------------------------------- TEST 9\n";
	try {
		Span sp = Span(10000);
		std::vector<int> vector;

		for (int i = 5000; i > 0; i--)
			vector.push_back(i + 100);
		for (int i = 5000; i < 10000; i++)
			vector.push_back(i - 100);


		sp.addNumber(vector);
//		sp.getSet();

		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
	return 0;
}
