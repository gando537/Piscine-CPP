/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:16:02 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 18:16:24 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGAANIMAL_H__
#define __WRONGAANIMAL_H__

#include <iostream>
#include <string>

class WrongAAnimal
{
    protected :

        std::string _type ;
    
    public :

        WrongAAnimal ( void ) ;
        WrongAAnimal ( std::string type ) ;
        WrongAAnimal ( WrongAAnimal & other ) ;

        WrongAAnimal & operator = ( WrongAAnimal & other) ;

        void makeSound ( void ) const ;
        virtual std::string getType ( void ) const ;

        virtual ~WrongAAnimal ( void ) ;
};

#endif
