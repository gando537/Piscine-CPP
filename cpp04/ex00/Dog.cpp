/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:29 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:19:27 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
}

Dog::Dog ( Dog & other ) : Animal(other)
{
}

Dog & Dog::operator = ( Dog & other)
{
    this->Animal::operator=(other);
    return (*this);
}

void Dog::makeSound ( void ) const
{
    std::cout << "(Dog) the dog barks" << std::endl ;
}

std::string Dog::getType ( void ) const
{
    return (this->_type);
}

Dog::~Dog ( void )
{
    std::cout << "(Dog) Destructor called" << std::endl ;
}
