/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:22:53 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:13:28 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) : WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat ( WrongCat & other ) : WrongAnimal(other)
{
}

WrongCat & WrongCat::operator = ( WrongCat & other)
{
    this->WrongAnimal::operator=(other);
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
