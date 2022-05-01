/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:20 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:49:23 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ( void ) : AAnimal("Cat")
{
    this->_brain = new Brain();
}

Cat::Cat ( Cat & other ) : AAnimal(other)
{
    this->_brain = new Brain(*other.getBrain());
}

Cat & Cat::operator = ( Cat & other)
{
    if (this != &other)
    {
        this->~Cat();
        this->_brain = new Brain(*other.getBrain());
        this->AAnimal::operator=(other);
    }
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

Brain *Cat::getBrain() const
{
	return this->_brain ;
}

Cat::~Cat ( void )
{
    delete this->_brain;
    std::cout << "(Cat) Destructor called" << std::endl ;
}
