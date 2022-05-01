/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:38:16 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 18:50:37 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern & Intern::operator = ( Intern const & )
{
    return *this;
}

Form * Intern::makeForm ( std::string const & formName, std::string const & target )
{
	const std::string formNames[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
    };

	Form * (*forms[3])(std::string const &target) = { 
        &ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
    };

	for (int i = 0; i < 3; ++i)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i](target);
		}
	}
	throw Intern::NotKnownFormException();
}

const char * Intern::NotKnownFormException::what () const throw()
{
    return ("Intern can't create NotKnownForm");
}
