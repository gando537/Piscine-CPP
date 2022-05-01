/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:17:32 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:04:13 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure () : AMateria ( "cure" )
{
}

Cure::Cure ( Cure const & other ) : AMateria(other)
{
}

Cure & Cure::operator = ( Cure const & other )
{
    this->AMateria::operator=(other);
    return (*this);
}

std::string const & Cure::getType() const
{
    return (this->_type);
}

AMateria * Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use ( ICharacter & target )
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl ;
    this->AMateria::use(target) ;
}

Cure::~Cure ()
{}
