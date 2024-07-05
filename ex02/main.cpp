/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:37:23 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 03:53:38 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int> defArray;
		std::cout << "Default array size: " << defArray.size() << std::endl;

		Array<int> array(5);
		std::cout << "Array size: " << array.size() << std::endl;

		for (unsigned int i = 0; i < array.size(); i++)
			array.setValue(i, i + 1);

		std::cout << "Array elements: ";
		for (unsigned int i = 0; i < array.size(); i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;

		Array<int> carray(array);
		std::cout << "CArray size: " << carray.size() << std::endl;
		std::cout << "CArray elements: ";
		for (unsigned int i = 0; i < carray.size(); i++)
			std::cout << carray[i] << " ";
		std::cout << std::endl;

		Array<int> asarray;
		asarray = array;
		std::cout << "AsArray size: " << asarray.size() << std::endl;
		std::cout << "AsArray elements: ";
		for (unsigned int i = 0; i < asarray.size(); i++)
			std::cout << asarray[i] << " ";
		std::cout << std::endl;

		std::cout << "Testimg out-of-bounds access: " << std::endl;
		std::cout << array[9] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}

	return 0;

}
