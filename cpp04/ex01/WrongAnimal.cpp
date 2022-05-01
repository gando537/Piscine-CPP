/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:19:19 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:13:00 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void )
{
    this->_type = "default_name" ;
    std::cout << "(WrongAnimal) Default Constructor called" << std::endl ;
}

WrongAnimal::WrongAnimal ( std::string type )
{
    this->_type = type ;
    std::cout << "(WrongAnimal) " << this->_type << " Constructor called" << std::endl ;
}

WrongAnimal::WrongAnimal ( WrongAnimal & other )
{
    *this = other ;
    std::cout << "(WrongAnimal) Copy Constructor called" << std::endl ;
}

WrongAnimal & WrongAnimal::operator = ( WrongAnimal & other)
{
    std::cout << "(WrongAnimal) Assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

void WrongAnimal::makeSound ( void ) const
{
    std::cout << "(WrongAnimal) Animal makes sound" << std::endl ;
}

std::string WrongAnimal::getType ( void ) const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal ( void )
{
    std::cout << "(WrongAnimal) Destructor called" << std::endl ;
}
