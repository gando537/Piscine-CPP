/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:55:50 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/20 20:19:22 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>

template <typename T> class Array
{
    private:
        unsigned int _size;
        T * _array;

    public:
        Array ()
        {
            _size = 0;
            _array = new T[0];
        };
        Array ( unsigned int n )
        {
            _array = new T[n];
            _size = n;
        };
        Array ( const Array & other )
        {
            this->_size = other.size() ; 
            this->_array = new T[other.size()];
            for (unsigned int i = 0; i < other.size(); i++)
                this->_array[i] = other[i];
        };
        Array<T> & operator = ( const Array & other )
        {
            if (this != &other)
            {
                this->~Array();
                this->_size = other.size();
                this->_array = new T[other.size()];
                for (unsigned int i = 0; i < other.size(); i++)
                    this->_array[i] = other[i];
            }
            return *this;
        };
        T operator [] ( int i ) const
        {
            if (i < 0 || i >= static_cast<int>(this->size()))
                throw Array::OutOfRangeException();
            return this->_array[i];
        };
        T & operator [] ( int i )
        {
            if (i < 0 || i >= static_cast<int>(this->size()))
                throw Array::OutOfRangeException();
            return this->_array[i];
        };
        ~Array ()
        {
            delete [] this->_array;
        };

        T * getArray () const
        {
            return this->_array;
        };

        unsigned int size () const
        {
            return this->_size;
        }

        class OutOfRangeException : public std::exception
        {
            virtual const char * what () const throw ()
            {
                return "Out of range";
            }
        };
};

#endif
