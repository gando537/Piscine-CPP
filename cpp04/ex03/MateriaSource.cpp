/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:52:41 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/12 16:07:02 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource ()
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource ( MateriaSource const & other )
{
    for (int i = 0; i < 4; i++)
    {
        AMateria const *tmp = other.getMateria(i);
        if (tmp)
            this->_materia[i] =  tmp->clone() ;
        else
            this->_materia[i] = NULL ;
    }
}

MateriaSource & MateriaSource::operator = ( MateriaSource const & other )
{
    if (this != &other)
    {
        this->~MateriaSource();

        for (int i = 0; i < 4; i++)
        {
            AMateria const *tmp = other.getMateria(i);
            if (tmp)
                this->_materia[i] =  tmp->clone() ;
            else
                this->_materia[i] = NULL ;
        }
    }
    return (*this) ;
}

AMateria * MateriaSource::getMateria ( int index ) const
{
    return (this->_materia[index]);
}

MateriaSource::~MateriaSource ()
{
    for (int i = 0; i < 4; ++i)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
}

void MateriaSource::learnMateria ( AMateria * materia )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return;
		}
	}
}

AMateria * MateriaSource::createMateria ( std::string const & type )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
