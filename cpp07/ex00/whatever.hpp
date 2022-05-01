/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:18:54 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/20 18:39:34 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
#define _WHATEVER_HPP_

#include <iostream>
#include <string>

template <typename T> void swap ( T & value1, T & value2 )
{
    T tmp ;
    tmp = value1 ;
    value1 = value2 ;
    value2 = tmp ;
}

template <typename T> T & min ( T & value1, T & value2 )
{
    return ( ( value1 < value2 ) ? value1 : value2 ) ;
}

template <typename T> T & max ( T & value1, T & value2 )
{
    return ( ( value1 > value2 ) ? value1 : value2 ) ;
}

template <typename T> class ClassTemplate
{
    private :
        T _value ;
    
    public :
        ClassTemplate () {} ;
        ClassTemplate ( T const & value ) : _value(value) {} ;
        ~ClassTemplate () {} ;
        ClassTemplate ( ClassTemplate const & other )
        {
            *this = other ;
        }

        ClassTemplate & operator = ( ClassTemplate const & other )
        {
            if (this != &other)
            {
                this->_value = other._value ;
            }
            return (*this) ;
        }

        bool operator < ( ClassTemplate & other )
        {
            return ( this->_value < other._value ) ;
        }

        bool operator > ( ClassTemplate & other )
        {
            return ( this->_value > other._value ) ;
        }

        T getValue() const
	    {
		    return (this->_value);
	    };
};

template <typename T> std::ostream & operator << ( std::ostream & os, ClassTemplate <T> const & other )
{
	os << other.getValue();
	return os;
}

#endif
