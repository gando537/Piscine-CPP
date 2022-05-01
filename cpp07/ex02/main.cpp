/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:10:44 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/20 20:27:57 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<std::string> array(5);

	for (int i = 0; i < 5; i++)
	{
		try
		{
			array[i] = std::string("Hello" + std::to_string(i));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	for (int i = 0; i < 5; i++)
	{
		try
		{
			std::cout << array[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n=======================\n" << std::endl;
	
	Array<std::string> array2;

	array2 = array;

	for (int i = 0; i < 5; i++)
	{
		try
		{
			std::cout << array2[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n=======================\n" << std::endl;

	try
	{
		std::cout << array2[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
