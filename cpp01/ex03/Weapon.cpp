r/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:13:26 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/31 23:25:01 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
    _tp()
{}

Weapon::Weapon ( std::string tp ) : 
    _tp(tp)
{}

Weapon::Weapon ( const Weapon & copy ) :
    _tp(copy._tp)
{}

std::string & Weapon::getTypeRef ( void ) 
{
    return this->_tp ;
}
    
std::string const & Weapon::getType ( void ) const
{
    return this->_tp ;
}

void Weapon::setType ( const std::string & tp )
{
    this->_tp = tp ;
}

Weapon & Weapon::operator = (const Weapon & op)
{
    if (this == &op)
        return (*this);
    this->_tp = op._tp;
    return (*this);
}

Weapon::~Weapon ( void ) 
{
}
