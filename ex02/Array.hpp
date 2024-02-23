/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:01:43 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/23 16:44:30 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_ARRAY
# define HPP_ARRAY

# include <iostream>

/// @brief Contains elements of type T.
/// @tparam T can be anything that can be an array.
template<class T>
class Array {
	private:
		T*		_array;
		size_t	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& copy);
		~Array(void);

		Array&	operator=(const Array& rhs);
		T&		operator[](size_t i);

		class wrongIndex: public std::exception {
			const char*	what(void) const throw();
		};

		size_t	size(void) const;
};

#endif
