/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:58:43 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/23 21:11:38 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span ( unsigned const int n ) :
    _nbValue(0),
    _max_n(n)
{}

Span::Span ( Span const & other )
{
    this->_nbValue = other._nbValue ;
    this->_max_n = other._max_n ;
}

Span::~Span ()
{}

Span & Span::operator = ( Span const & other )
{
    if (this != & other)
    {
        this->_nbValue = other._nbValue ;
        this->_max_n = other._max_n ;
    }
    return (*this) ;
}

void Span::addNumber ( const int n )
{

    if (this->_nbValue == this->_max_n)
        throw OutOfRangeException() ;
    this->_lst.push_back(n) ;
    this->_nbValue++ ;
}

void Span::print_list ( int value )
{
    std::cout << "[ " << value <<  " ] " ;
}

void Span::getlist () const
{
    for_each(this->_lst.begin(), this->_lst.end(), this->print_list) ;
}

int Span::shortestSpan ()
{
    int mini ;
    
    if (this->_nbValue <= 1)
        throw InsufficientException() ;
    std::list<int> lstcpy = this->_lst ;
    lstcpy.sort() ;
    std::list<int>::iterator prev_ilst ;
    std::list<int>::iterator next_ilst ;
    next_ilst = lstcpy.begin() ;
    prev_ilst = next_ilst++ ;
    mini = *next_ilst++ - *prev_ilst++ ;
    while (next_ilst != lstcpy.end())
    {
        if ((*next_ilst - *prev_ilst) < mini)
            mini = *next_ilst - *prev_ilst ;
        next_ilst++;
        prev_ilst++;
    }
    return (mini);
}

int Span::longestSpan ()
{
    if (this->_nbValue <= 1)
        throw InsufficientException() ;
    std::list<int> lstcpy = this->_lst ;
    lstcpy.sort() ;
    return (lstcpy.back() - lstcpy.front()) ;
}
