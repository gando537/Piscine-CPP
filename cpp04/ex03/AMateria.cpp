/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:14:53 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:02:47 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria ( std::string const & type )
{
    this->_type = type ;
}

AMateria::AMateria ( AMateria const & other )
{
    this->_type = other._type;
}

AMateria & AMateria::operator = ( AMateria const & other )
{
    if (this != &other)
    {
        this->_type = other._type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use ( ICharacter & )
{
}

AMateria::~AMateria ()
{}
