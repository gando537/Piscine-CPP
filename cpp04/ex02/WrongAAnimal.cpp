/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:19:19 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:13:00 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal ( void )
{
    this->_type = "default_name" ;
    std::cout << "(WrongAAnimal) Default Constructor called" << std::endl ;
}

WrongAAnimal::WrongAAnimal ( std::string type )
{
    this->_type = type ;
    std::cout << "(WrongAAnimal) " << this->_type << " Constructor called" << std::endl ;
}

WrongAAnimal::WrongAAnimal ( WrongAAnimal & other )
{
    *this = other ;
    std::cout << "(WrongAAnimal) Copy Constructor called" << std::endl ;
}

WrongAAnimal & WrongAAnimal::operator = ( WrongAAnimal & other)
{
    std::cout << "(WrongAAnimal) Assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

void WrongAAnimal::makeSound ( void ) const
{
    std::cout << "(WrongAAnimal) AAnimal makes sound" << std::endl ;
}

std::string WrongAAnimal::getType ( void ) const
{
    return (this->_type);
}

WrongAAnimal::~WrongAAnimal ( void )
{
    std::cout << "(WrongAAnimal) Destructor called" << std::endl ;
}
