/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:04:37 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/23 14:59:38 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T, typename Treturn>
void	iter(T* ptr, size_t size, Treturn (*func)(T&)) {
	if (!ptr || size <= 0)
		return ;
	for (size_t i = 0; i < size; i++) {
		func(ptr[i]);
	}
}

static void	toZ(char& c) {
	c = 'Z';
}

static void	pwrTwo(int& n) {
	n *= n;
}

template<typename T>
void	printTest(T& a) {
	std::cout << a << ", ";
}

int	main(void) {
	char	string[14] = "Hello, world!";
	int		myNumbers[10] = {10, 33, 44, 16, 1, 7, 23, 8, 88, 19};

	std::cout << "string before: " << string << std::endl;
	iter(string, std::strlen(string), toZ);
	std::cout << "string after iter: " << string << std::endl;

	std::cout << "myNumbers before: ";
	for (size_t i = 0; i < 10; i++) {
		std::cout << myNumbers[i] << ", ";
	}
	std::cout << std::endl;

	iter(myNumbers, 10, pwrTwo);
	std::cout << "myNumbers after iter: ";
	for (size_t i = 0; i < 10; i++) {
		std::cout << myNumbers[i] << ", ";
	}
	std::cout << std::endl;

	iter(string, std::strlen(string), printTest<char>);
	std::cout << std::endl;
	iter(myNumbers, 10, printTest<int>);
	std::cout << std::endl;
	return (0);
}
