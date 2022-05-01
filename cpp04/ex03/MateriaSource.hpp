/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:42:31 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 12:55:17 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :

        AMateria *_materia[4] ;
        
    public:

        MateriaSource () ;
        MateriaSource ( MateriaSource const & other ) ;
        MateriaSource & operator = ( MateriaSource const & other ) ;
        AMateria * getMateria ( int index ) const;
        ~MateriaSource ();

        void learnMateria ( AMateria * materia ) ;
        AMateria *createMateria ( std::string const & type ) ;
};

#endif
