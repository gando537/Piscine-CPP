/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:01:06 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 18:00:27 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point ( void ) :
    _x(0),
    _y(0)
{}

Point::Point ( const Point & copy)
{
    (Fixed)this->_x = (Fixed)copy._x;
    (Fixed)this->_y = (Fixed)copy._y;
}

Point::Point ( Fixed const & abs, Fixed const & ord ) :
    _x(abs),
    _y(ord)
{}

Point & Point::operator = ( const Point & op)
{
    if (this == &op)
        return (*this);
    (Fixed)this->_x = (Fixed)op._x;
    (Fixed)this->_y = (Fixed)op._y;
    return (*this);
}

bool Point::operator == (Point const & op) const
{
    if (((Fixed)this->_x == op._x) && ((Fixed)this->_y == op._y))
        return (true);
    return (false);
}

Fixed const & Point::getPointX( void ) const
{
    return (this->_x);
}

Fixed const & Point::getPointY( void ) const
{
    return (this->_y);
}

Point::~Point ( void )
{}
