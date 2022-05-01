/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:29 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:15:57 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
    this->_brain = new Brain() ;
}

Dog::Dog ( Dog & other ) : Animal(other)
{
    this->_brain = new Brain(*other.getBrain());
}

Dog & Dog::operator = ( Dog & other)
{
    if (this != &other)
    {
        this->~Dog();
        this->_brain = new Brain(*other.getBrain());
        this->Animal::operator=(other);
    }
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

Brain *Dog::getBrain() const
{
	return this->_brain ;
}

Dog::~Dog ( void )
{
    // delete this->_brain ;
    std::cout << "(Dog) Destructor called" << std::endl ;
}
