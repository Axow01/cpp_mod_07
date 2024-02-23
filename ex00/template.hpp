/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:32:14 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/23 14:02:35 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_TEMPLATE
# define HPP_TEMPLATE

# include <iostream>

/// @brief Swaps the values of two given arguments.
/// @tparam T These can be any types of arguments, the only requirement is that
///		the two arguements must have the same type and must support all the comparison operators.
/// @param a 
/// @param b 
template<typename T>
void	swap(T& a, T& b);

/// @brief Compares the two values passed in its arguments and returns the
///		one. If the two of them are equal, the it returns the second one.
/// @tparam T These can be any types of arguments, the only requirement is that
///		the two arguements must have the same type and must support all the comparison operators.
/// @param a 
/// @param b 
/// @return The given arguments type.
template<typename T>
T		min(T& a, T& b);

/// @brief Compares the two values passed in its arguements and returns the greatest one.
///		If the two of them are equal, then it returns the second one.
/// @tparam T These can be any types of arguments, the only requirement is that
///		the two arguements must have the same type and must support all the comparison operators.
/// @param a 
/// @param b 
/// @return The given arguments type.
template<typename T>
T		max(T& a, T& b);

#endif
