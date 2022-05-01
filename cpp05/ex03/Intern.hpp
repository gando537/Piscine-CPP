/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:35:24 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/15 17:47:02 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <iostream>
#include "Form.hpp"

class Intern
{
    private:
    public:
        Intern () {}
        Intern ( Intern const & ) {}
        Intern & operator = ( Intern const & ) ;
        ~Intern() {}

        Form * makeForm ( std::string const & formName, std::string const & target ) ;

        class NotKnownFormException : public std::exception
        {
        public:
            const char * what () const throw () ;
        };
};

#endif
