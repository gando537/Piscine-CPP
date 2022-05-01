/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:13:07 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/01 00:04:07 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( const std::string & name ) :
    _name(name),
    _wp ()
{}

HumanB::HumanB ( const HumanB &copy ) :
    _name(copy._name),
    _wp(copy._wp)
{}

HumanB::~HumanB ( void )
{
}

void HumanB::attack ( void )
{
    std::cout << this->_name << " " << "attacks with his " << this->_wp->getType() << std::endl;
}

HumanB &HumanB::operator=(const HumanB& op)
{
    if (this == &op)
        return (*this);
    this->_wp = op._wp;
    this->_name = op._name;
    return (*this);
}

void HumanB::setWeapon ( Weapon &wp )
{
    this->_wp = &wp ;
}
