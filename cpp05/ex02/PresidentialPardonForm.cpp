/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:55:00 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 17:14:33 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( std::string const & target ) : Form(target, "PresidentialPardonForm", 72, 45)
{}

PresidentialPardonForm::PresidentialPardonForm ( PresidentialPardonForm const & other ) : Form(other)
{}

PresidentialPardonForm & PresidentialPardonForm::operator = ( PresidentialPardonForm const & other )
{
	this->Form::operator=(other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm ()
{}

void PresidentialPardonForm::action ( Bureaucrat const & executer ) const
{
	this->Form::execute(executer);
	std::cout << "The " << this->getTarget() << " has been pardoned by " << executer.getName() << "." << std::endl;
}
