/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:39:46 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/16 16:07:50 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERT_HPP__
#define __CONVERT_HPP__

#include <iostream>
#include <cmath>

class Convert
{
    private:
        const std::string _value;
        Convert() : _value("error"){};

    public:
        Convert(std::string const &value) : _value(value){};
        ~Convert(){};
        std::string const & getValue () const ;
        char toChar () const ;
        int toInt () const ;
        float toFloat () const ;
        double toDouble () const ;

        class ImpossibleException : public std::exception
        {
            const char *what() const throw()
            {
                return "impossible";
            }
        };
        
        class NonDisplayableException : public std::exception
        {
            const char *what() const throw()
            {
                return "Non displayable";
            }
        };
};

std::ostream & operator << (std::ostream & os, Convert const & convert);

#endif
