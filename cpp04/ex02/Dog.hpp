/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:33 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:49:23 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "AAnimal.hpp"

class Dog : public AAnimal
{
    private :

        Brain *_brain ;

    public :

        Dog ( void ) ;
        Dog ( Dog & other ) ;

        Dog & operator = ( Dog & other) ;

        virtual void makeSound ( void ) const;
        virtual std::string getType ( void ) const;
        Brain * getBrain() const ;

        ~Dog ( void ) ;
};

#endif
