/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:39:47 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 15:47:11 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ( void ) : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
    this->_name = "default";
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 30;
    std::cout << "(DiamondTrap) Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap ( std::string const & name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 30;
    std::cout << "(DiamondTrap) String constructor called" << std::endl;
}

void DiamondTrap::attack ( std::string const & target )
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI ( void )
{
    std::cout << " My name is " << ClapTrap::get_name() << std::endl;
}

DiamondTrap::~DiamondTrap ( void )
{
    std::cout << "(DiamondTrap) Destructor called" << std::endl;
}
