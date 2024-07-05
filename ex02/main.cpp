/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:37:23 by adhaka            #+#    #+#             */
/*   Updated: 2024/07/05 04:19:25 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		// Test for default constructor
		Array<int> defArray;
		std::cout << "Default array size: " << defArray.size() << std::endl;

		// Test for constructor with size parameter
		Array<int> array(5);
		std::cout << "Array size: " << array.size() << std::endl;

		// Setting elements to 1, 2, 3, 4, 5
		for (unsigned int i = 0; i < array.size(); i++)
			array.setValue(i, i + 1);

		// Testing subscript operator and custom initialization
		std::cout << "Array elements: ";
		for (unsigned int i = 0; i < array.size(); i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;

		// Testing copy constructor
		Array<int> carray(array);
		std::cout << "CArray size: " << carray.size() << std::endl;
		std::cout << "CArray elements: ";
		for (unsigned int i = 0; i < carray.size(); i++)
			std::cout << carray[i] << " ";
		std::cout << std::endl;

		// Testing assignment operator
		Array<int> asarray;
		asarray = array;
		std::cout << "AsArray size: " << asarray.size() << std::endl;
		std::cout << "AsArray elements: ";
		for (unsigned int i = 0; i < asarray.size(); i++)
			std::cout << asarray[i] << " ";
		std::cout << std::endl;

		// Testing out-of-bounds access
		std::cout << "Testimg out-of-bounds access: " << std::endl;
		std::cout << array[9] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return 0;
}
