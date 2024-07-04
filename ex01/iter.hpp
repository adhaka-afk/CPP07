/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:37:12 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/03 06:28:57 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void iter(T *array, int length, void (*f)(T &))
{
	for (int a = 0; a < length; a++)
	{
		f(array[a]);
	}
}

#endif
