/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:27:11 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 14:52:49 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base
{
    public :
        Base & operator = ( Base const & other ) ;
        virtual ~Base () ;
};

Base * generate ( void ) ;

void identify ( Base * p ) ;

void identify ( Base & p ) ;

#endif
