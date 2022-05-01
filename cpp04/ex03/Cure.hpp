/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:15:52 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:04:32 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
#define __CURE_H__

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    private :

    public :

        Cure () ;
        Cure ( std::string const & type ) ;
        Cure ( Cure const & other ) ;

        Cure & operator = (Cure const & other ) ;
        AMateria * clone() const ;
        std::string const & getType() const ;
        void use ( ICharacter & target ) ;

        ~Cure () ;
};

#endif
