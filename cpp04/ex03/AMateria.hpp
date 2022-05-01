/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:04:17 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:05:52 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
    private :

        AMateria () {} ;

    protected:

        std::string _type ;

    public :

        AMateria ( std::string const & type ) ;
        AMateria ( AMateria const & other ) ;

        AMateria & operator = (AMateria const & other ) ;
        std::string const & getType() const ;
        virtual AMateria * clone() const = 0 ;
        virtual void use ( ICharacter & target ) ;

        virtual ~AMateria () ;
};

#endif
