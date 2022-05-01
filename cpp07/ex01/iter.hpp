/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:23:33 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/20 19:45:17 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>
#include <string>

template <typename T> void iter ( T * tab, size_t size, void (*func)(T &))
{
    for (size_t i = 0 ; i < size ; i++)
        func(tab[i]) ;
}

template <typename T> class ClassTemplate
{
    private :
        T _value ;
    
    public :
        ClassTemplate () {} ;
        ClassTemplate ( T & value ) : _value(value) {} ;
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

        void setValue( T & val )
	    {
		    this->_value = val;
	    };
};

template <typename T> std::ostream & operator << ( std::ostream & os, ClassTemplate <T> const & other )
{
	os << other.getValue();
	return os;
}

template <typename T> void print_class(ClassTemplate <T> & other)
{
    std::cout << other << std::endl  ;
}

#endif
