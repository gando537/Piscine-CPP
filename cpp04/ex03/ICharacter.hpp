/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:04:17 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 13:28:55 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_H__
#define __ICHARACTER_H__

#include <iostream>
#include <string>
class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter () {}
        virtual std::string const & getName () const = 0 ;
        virtual void equip ( AMateria * m ) = 0;
        virtual void unequip ( int idx ) = 0;
        virtual void use ( int idx, ICharacter & target ) = 0;
};

#endif
