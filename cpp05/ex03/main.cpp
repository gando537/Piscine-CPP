/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:26:43 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 18:36:11 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	srand(time(NULL));

	Bureaucrat Gan2("Gan2", 1);
	Bureaucrat wrong("wrong", 150);
	Intern intern;

	Form *form;

	form = intern.makeForm("ShrubberyCreationForm", "target");
	test_form(*form, Gan2, wrong);
	delete form;
	form = intern.makeForm("RobotomyRequestForm", "target");
	test_form(*form, Gan2, wrong);
	delete form;
	form = intern.makeForm("PresidentialPardonForm", "target");
	test_form(*form, Gan2, wrong);
	delete form;

	try
	{
		form = intern.makeForm("WrongName", "target");
		test_form(*form, Gan2, wrong);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
