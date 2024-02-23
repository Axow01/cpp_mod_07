/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:05:07 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/23 14:22:59 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_ITER
# define HPP_ITER

# include <iostream>

/// @brief Call func on every elements of the array.
/// @tparam T type of the array
/// @tparam Treturn the function return type.
/// @param ptr address of an array.
/// @param size the size of the array.
/// @param func the function to call on every elements of the array.
template<typename T, typename Treturn>
void	iter(T* ptr, size_t size, Treturn (*func)(T&));

#endif
