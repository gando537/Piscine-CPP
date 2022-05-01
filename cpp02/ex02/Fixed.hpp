/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:08:36 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/04 16:04:26 by mdiallo          ###   ########.fr       */
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

        bool operator > ( const Fixed & op ) ;
        bool operator >= ( const Fixed & op ) ;
        bool operator < ( const Fixed & op ) ;
        bool operator == ( const Fixed & op ) ;
        bool operator != ( const Fixed & op ) ;

        Fixed operator + ( const Fixed & op ) ;
        Fixed operator - ( const Fixed & op ) ;
        Fixed operator * ( const Fixed & op ) ;
        Fixed operator / ( const Fixed & op ) ;

        Fixed & operator ++ ( void ) ;
        Fixed & operator -- ( void ) ;
        Fixed operator ++ ( int ) ;
        Fixed operator -- ( int ) ;

    	static const Fixed &min(const Fixed &a, const Fixed &b);
	    static Fixed &min(Fixed &a, Fixed &b);
	    static const Fixed &max(const Fixed &a, const Fixed &b);
	    static Fixed &max(Fixed &a, Fixed &b);

        int getRawBits ( void ) const ;
        void setRawBits ( int const raw ) ;

        float toFloat( void ) const ;
        int toInt( void ) const ;

        ~Fixed ( void ) ;
};

std::ostream & operator << ( std::ostream & out, const Fixed & value ) ;

#endif
