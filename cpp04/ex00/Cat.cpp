/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:20 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:19:35 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ( void ) : Animal("Cat")
{
}

Cat::Cat ( Cat & other ) : Animal(other)
{
}

Cat & Cat::operator = ( Cat & other)
{
    this->Animal::operator=(other);
    return (*this);
}

void Cat::makeSound ( void ) const
{
    std::cout << "(Cat) the Cat meows" << std::endl ;
}

std::string Cat::getType ( void ) const
{
    return (this->_type);
}

Cat::~Cat ( void )
{
    std::cout << "(Cat) Destructor called" << std::endl ;
}
