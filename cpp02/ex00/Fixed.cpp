/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:08:14 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 13:58:58 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void ) :
    _pointFixe(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed ( const Fixed & copy) :
    _pointFixe(copy._pointFixe)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed & op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return (*this) ;
    this->_pointFixe = op._pointFixe ;
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_pointFixe ;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "getRawBits member function called" << std::endl;
    this->_pointFixe = raw ;
}

Fixed::~Fixed ( void )
{
    std::cout << "Destructor called" << std::endl;
}
