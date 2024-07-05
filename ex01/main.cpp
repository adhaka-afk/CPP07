/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:37:15 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 03:04:39 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	int len = sizeof(tab) / sizeof(tab[0]);
	std::cout << "Orignale int array:" << std::endl;
	::iter(tab, len, printIt);
	std::cout << std::endl;

	::iter(tab, len, addOne);
	std::cout << "Array after addOne:" << std::endl;
	::iter(tab, len, printIt);
	std::cout << std::endl;

	double tab3[] = {0.0, 1.7, 2.2, 3.3, 4.8};
	len = sizeof(tab3) / sizeof(tab3[0]);
	std::cout << "Orignale double array:" << std::endl;
	::iter(tab3, len, printIt);
	std::cout << std::endl;

	::iter(tab3, len, addOne);
	std::cout << "Array after addOne:" << std::endl;
	::iter(tab3, len, printIt);
	std::cout << std::endl;
	return 0;
}
