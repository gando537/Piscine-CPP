/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:25 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:49:23 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "AAnimal.hpp"

class Cat : public AAnimal
{
    private :

        Brain *_brain ;
    
    public :

        Cat ( void ) ;
        Cat ( Cat & other ) ;

        Cat & operator = ( Cat & other) ;

        virtual void makeSound ( void ) const;
        virtual std::string getType ( void ) const;
        Brain * getBrain() const ;

        ~Cat ( void ) ;
};

#endif
