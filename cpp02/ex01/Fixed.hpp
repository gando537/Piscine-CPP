/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:08:36 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 14:07:47 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__H__
#define __FIXED__H__

#include <iostream>

class Fixed
{
    private :
        int _pointFixe ;
        static const int _nbBit = 8 ;
    
    public :
        Fixed ( void ) ;
        Fixed ( const Fixed & copy) ;
        Fixed ( const int val) ;
        Fixed ( const float val) ;

        Fixed & operator = ( const Fixed & op ) ;

        int getRawBits ( void ) const ;
        void setRawBits ( int const raw ) ;

        float toFloat( void ) const ;
        int toInt( void ) const ;

        ~Fixed ( void ) ;
};

std::ostream & operator << ( std::ostream & out, const Fixed & value ) ;

#endif
