/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:46:42 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/23 21:09:24 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <list>

class Span
{
    private :
        unsigned int _nbValue ;
        unsigned int _max_n ;
        std::list<int> _lst ;
        Span () {} ;

    public :
        Span ( unsigned const int n ) ;
        Span ( Span const & other ) ;
        ~Span () ;

        Span & operator = ( Span const & other ) ;

        void addNumber ( const int n ) ;
        int shortestSpan () ;
        int longestSpan () ;

        static void print_list ( int value ) ;
        void getlist () const ;

        class OutOfRangeException : public std::exception
        {
            virtual const char * what () const throw ()
            {
                return "List full, cannot add";
            }
        };
        class InsufficientException : public std::exception
        {
            virtual const char * what () const throw ()
            {
                return "Number of insufficient value";
            }
        };
};

#endif
