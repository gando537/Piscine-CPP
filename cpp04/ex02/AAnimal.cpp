/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:09 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:28:14 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal ( void )
{
    this->_type = "default_name" ;
    std::cout << "(AAnimal) Default Constructor called" << std::endl ;
}

AAnimal::AAnimal ( std::string type )
{
    this->_type = type ;
    std::cout << "(AAnimal) " << this->_type << " Constructor called" << std::endl ;
}

AAnimal::AAnimal ( AAnimal & other )
{
    *this = other ;
    std::cout << "(AAnimal) Copy Constructor called" << std::endl ;
}

AAnimal & AAnimal::operator = ( AAnimal & other)
{
    std::cout << "(AAnimal) Assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

std::string AAnimal::getType ( void ) const
{
    return (this->_type);
}

AAnimal::~AAnimal ( void )
{
    std::cout << "(AAnimal) Destructor called" << std::endl ;
}
