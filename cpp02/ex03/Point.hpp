/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:51:52 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 17:45:30 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point
{
    private :

        Fixed const _x;
        Fixed const _y;

    public :
    
        Point ( void );
        Point ( const Point & copy);
        Point ( Fixed const & abs, Fixed const & ord );

        Point & operator = ( const Point & op);
        bool operator == (Point const & op) const;

        Fixed const & getPointX( void ) const;
        Fixed const & getPointY( void ) const;

        ~Point ( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
