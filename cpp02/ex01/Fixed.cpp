/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:08:14 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 15:13:15 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed ( const int val)
{
    std::cout << "Int constructor called" << std::endl;
	this->_pointFixe = val << this->_nbBit;
}

Fixed::Fixed ( const float val )
{
    std::cout << "Float constructor called" << std::endl;
	this->_pointFixe = (int)roundf(val * (1 << this->_nbBit));
}

Fixed & Fixed::operator = (const Fixed & op)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return (*this) ;
    this->_pointFixe = op._pointFixe ;
    return (*this);
}

std::ostream & operator << (std::ostream & out, const Fixed & value )
{
	out << value.toFloat () ;
	return ( out );
}

int Fixed::toInt(void) const
{
	return (this->_pointFixe >> this->_nbBit);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_pointFixe / (1 << this->_nbBit));
}

int Fixed::getRawBits ( void ) const 
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
