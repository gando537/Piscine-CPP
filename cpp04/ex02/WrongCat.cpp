/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:22:53 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:49:23 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) : WrongAAnimal("WrongCat")
{
}

WrongCat::WrongCat ( WrongCat & other ) : WrongAAnimal(other)
{
}

WrongCat & WrongCat::operator = ( WrongCat & other)
{
    this->WrongAAnimal::operator=(other);
    return (*this);
}

void WrongCat::makeSound ( void ) const
{
    std::cout << "(WrongCat) the Cat meows" << std::endl ;
}

std::string WrongCat::getType ( void ) const
{
    return (this->_type);
}

WrongCat::~WrongCat ( void ) 
{
    std::cout << "(WrongCat) Destructor called" << std::endl ;
}
