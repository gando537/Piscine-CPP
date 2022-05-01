/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:22:06 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:04:10 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice () : AMateria ( "ice" )
{
}

Ice::Ice ( Ice const & other ) : AMateria(other)
{
}

Ice & Ice::operator = ( Ice const & other )
{
    this->AMateria::operator=(other);
    return (*this);
}

std::string const & Ice::getType() const
{
    return (this->_type);
}

AMateria * Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use ( ICharacter & target )
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    this->AMateria::use(target) ;
}

Ice::~Ice ()
{}
