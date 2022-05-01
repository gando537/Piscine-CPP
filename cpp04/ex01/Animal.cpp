/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:09 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 19:02:14 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void )
{
    this->_type = "default_name" ;
    std::cout << "(Animal) Default Constructor called" << std::endl ;
}

Animal::Animal ( std::string type )
{
    this->_type = type ;
    std::cout << "(Animal) " << this->_type << " Constructor called" << std::endl ;
}

Animal::Animal ( Animal & other )
{
    *this = other ;
    std::cout << "(Animal) Copy Constructor called" << std::endl ;
}

Animal & Animal::operator = ( Animal & other)
{
    std::cout << "(Animal) Assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

void Animal::makeSound ( void ) const
{
    std::cout << "(Animal) Animal makes sound" << std::endl ;
}

std::string Animal::getType ( void ) const
{
    return (this->_type);
}

Animal::~Animal ( void )
{
    std::cout << "(Animal) Destructor called" << std::endl ;
}
