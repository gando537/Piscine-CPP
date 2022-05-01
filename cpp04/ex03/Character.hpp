/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:31:36 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:05:42 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :

        std::string _name ;
        AMateria *_materia[4] ;

        Character () {} ;

    public :

        Character ( std::string const & name ) ;
        Character ( Character const & other ) ;

        Character & operator = ( Character const & other ) ;

        std::string const & getName() const ;
        AMateria const * getMateria ( int index ) const ;
        void equip ( AMateria * m );
	    void unequip ( int idx );
        void use ( int index, ICharacter & target ) ;

        ~Character () ;
};

#endif
