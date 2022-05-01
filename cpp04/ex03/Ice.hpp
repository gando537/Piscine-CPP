/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:19:58 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:03:11 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
#define __ICE_H__

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    private :

    public :

        Ice () ;
        Ice ( std::string const & type ) ;
        Ice ( Ice const & other ) ;

        Ice & operator = (Ice const & other ) ;
        AMateria * clone() const;
        std::string const & getType() const ;
        void use ( ICharacter & target ) ;

        ~Ice () ;
};

#endif
