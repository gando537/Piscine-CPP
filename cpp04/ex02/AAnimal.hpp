/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:16 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:27:17 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_H__
#define __AANIMAL_H__

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected :

        std::string _type ;
    
    public :

        AAnimal ( void ) ;
        AAnimal ( std::string type ) ;
        AAnimal ( AAnimal & other ) ;

        AAnimal & operator = ( AAnimal & other) ;

        virtual void makeSound ( void ) const = 0 ;
        virtual std::string getType ( void ) const ;

        virtual ~AAnimal ( void ) ;
};

#endif
