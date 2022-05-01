/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:16:02 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 18:16:24 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <iostream>
#include <string>

class WrongAnimal
{
    protected :

        std::string _type ;
    
    public :

        WrongAnimal ( void ) ;
        WrongAnimal ( std::string type ) ;
        WrongAnimal ( WrongAnimal & other ) ;

        WrongAnimal & operator = ( WrongAnimal & other) ;

        void makeSound ( void ) const ;
        virtual std::string getType ( void ) const ;

        virtual ~WrongAnimal ( void ) ;
};

#endif
