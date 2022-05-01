/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:20:51 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:49:23 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal
{
    protected :
    
    public :

        WrongCat ( void ) ;
        WrongCat ( WrongCat & other ) ;

        WrongCat & operator = ( WrongCat & other) ;

        void makeSound ( void ) const;
        virtual std::string getType ( void ) const;

        ~WrongCat ( void ) ;
};

#endif
