/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:33 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:20:57 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{
    protected :

    public :

        Dog ( void ) ;
        Dog ( Dog & other ) ;

        Dog & operator = ( Dog & other) ;

        virtual void makeSound ( void ) const;
        virtual std::string getType ( void ) const;

        ~Dog ( void ) ;
};

#endif
