/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:08:14 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 16:43:31 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed ( void ) :
    _pointFixe(0)
{
}

Fixed::Fixed ( const Fixed & copy) :
    _pointFixe(copy._pointFixe)
{
}

Fixed::Fixed ( const int val)
{
	this->_pointFixe = val << this->_nbBit;
}

Fixed::Fixed ( const float val )
{
	this->_pointFixe = (int)roundf(val * (1 << this->_nbBit));
}

Fixed & Fixed::operator = (const Fixed & op)
{
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

bool Fixed::operator > ( const Fixed & op )
{
    return (this->_pointFixe > op._pointFixe) ;
}

bool Fixed::operator >= ( const Fixed & op )
{
    return (this->_pointFixe >= op._pointFixe) ;
}

bool Fixed::operator < ( const Fixed & op )
{
    return (this->_pointFixe < op._pointFixe) ;
}

bool Fixed::operator == ( const Fixed & op )
{
    return (this->_pointFixe == op._pointFixe) ;
}

bool Fixed::operator != ( const Fixed & op )
{
    return (this->_pointFixe != op._pointFixe) ;
}


Fixed Fixed::operator + ( const Fixed & op )
{
    Fixed res;

    res.setRawBits(this->_pointFixe + op._pointFixe) ;
    return (res);
}

Fixed Fixed::operator - ( const Fixed & op )
{
    Fixed res;

    res.setRawBits(this->_pointFixe - op._pointFixe) ;
    return (res);
}

Fixed Fixed::operator * ( const Fixed & op )
{
    Fixed res;

    res.setRawBits(this->_pointFixe * op._pointFixe / (1 << this->_nbBit)) ;
    return (res);
}

Fixed Fixed::operator / ( const Fixed & op )
{
    Fixed res;

    res.setRawBits(this->_pointFixe / op._pointFixe * (1 << this->_nbBit)) ;
    return (res);
}

Fixed & Fixed::operator ++ ( void )
{
    this->_pointFixe++;
    return (*this);
}

Fixed & Fixed::operator -- ( void )
{
    this->_pointFixe--;
    return (*this);
}

Fixed Fixed::operator ++ ( int )
{
    Fixed res(*this);

    this->_pointFixe++ ; 
    return (res);
}

Fixed Fixed::operator -- ( int )
{
    Fixed res(*this);

    this->_pointFixe-- ; 
    return (res);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a < (Fixed)b)
        return (a);
    return (b) ;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b) ;
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a > (Fixed)b)
        return (a);
    return (b) ;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b) ;
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
    return this->_pointFixe ;
}

void Fixed::setRawBits(int const raw)
{
    this->_pointFixe = raw ;
}

Fixed::~Fixed ( void )
{
}
