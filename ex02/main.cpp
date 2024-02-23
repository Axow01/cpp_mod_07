/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:02:38 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/23 16:55:36 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <ctime>

template<class T>
Array<T>::Array(void): _array(NULL), _size(0) {}

template<class T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n) {}

template<class T>
Array<T>::Array(const Array& copy): _array(new T[copy._size]), _size(copy._size) {
	*this = copy;
}

template<class T>
Array<T>::~Array(void) {
	if (_array)
		delete[] _array;
}

template<class T>
Array<T>&	Array<T>::operator=(const Array& rhs) {
	if (this != &rhs) {
		_size = rhs._size;
		if (!_array)
			_array = new T[_size];
		for (size_t i = 0; i < _size; i++) {
			_array[i] = rhs._array[i];
		}
	}
	return (*this);
}

template<class T>
T&	Array<T>::operator[](size_t n) {
	if (n >= _size || n < 0 || !_array)
		throw wrongIndex();
	return (*(_array + n));
}

template<class T>
size_t	Array<T>::size(void) const {
	return (_size);
}

template<class T>
const char*	Array<T>::wrongIndex::what(void) const throw() {
	return ("Error: the index given is wrong, the index is either too low or high.");
}

int	main(void) {
	Array<char>	myNiceArray(10);

	try {
		for (size_t i = 0; i < myNiceArray.size(); i++) {
			srand(i * time(NULL));
			myNiceArray[i] = (std::rand() % 25) + 'a';
		}
		for (size_t i = 0; i < myNiceArray.size(); i++) {
			std::cout << myNiceArray[i] << std::endl;
		}
		myNiceArray[20] = 'b'; // This should fail.
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
