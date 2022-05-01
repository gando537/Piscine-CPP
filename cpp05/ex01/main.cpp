/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:26:43 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 15:11:52 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat Gan2("Gan2", 10);

	try
	{
		Gan2.setIncreaseGrade(9);
		std::cout << Gan2 << std::endl;
		Gan2.setIncreaseGrade(1);
		std::cout << Gan2 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form formA("a", 10, 10);
	Form formB("b", 10, 10);
	Gan2.signForm(formA);
	Gan2.setDecreaseGrade(10);
	Gan2.signForm(formB);
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;
	return 0;
}
