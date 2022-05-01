/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:00:51 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/05 17:00:55 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ) : ClapTrap ()
{
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
    std::cout << "(ScavTrap) Default constructor called" << std::endl;
}

ScavTrap::ScavTrap ( std::string name ) : ClapTrap (name)
{
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
    std::cout << "(ScavTrap) String constructor called" << std::endl;
}

ScavTrap::ScavTrap ( ClapTrap & copy) : ClapTrap (copy)
{
    std::cout << "(ScavTrap) Copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator = ( ScavTrap & op )
{
	this->ClapTrap::operator = (op);
	return (*this);
}

void ScavTrap::attack ( std::string const & target )
{
	std::cout << "ScavTrap:: ";
	this->ClapTrap::attack(target);
}
void ScavTrap::takeDamage ( unsigned int amount )
{
	std::cout << "ScavTrap:: ";
	this->ClapTrap::takeDamage(amount);
}
void ScavTrap::beRepaired ( unsigned int amount )
{
	std::cout << "ScavTrap:: ";
	this->ClapTrap::beRepaired(amount);
}

void ScavTrap::guardGate ( void )
{
    std::cout << "that ScavTrap have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap ( void )
{
    std::cout << "(ScavTrap) Destructor called" << std::endl;
}
