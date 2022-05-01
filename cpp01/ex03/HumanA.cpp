/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:13:00 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/31 23:37:04 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon &wp) : 
    _name(name),
     _wp(wp)
{}

HumanA::HumanA(const HumanA & copy)
:
    _name(copy._name),
    _wp(copy._wp)
{}

HumanA &HumanA::operator=(const HumanA & op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_wp = op._wp;
    return (*this);
}

HumanA::~HumanA ( void )
{
}

void HumanA::attack ( void )
{
    std::cout << this->_name << " " << "attacks with his " << this->_wp.getType() << std::endl;
}
