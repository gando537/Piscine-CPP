/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:16 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:11:42 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <iostream>
#include <string>

class Animal
{
    protected :

        std::string _type ;
    
    public :

        Animal ( void ) ;
        Animal ( std::string type ) ;
        Animal ( Animal & other ) ;

        Animal & operator = ( Animal & other) ;

        virtual void makeSound ( void ) const ;
        virtual std::string getType ( void ) const ;

        virtual ~Animal ( void ) ;
};

#endif
