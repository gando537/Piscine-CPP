/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:00:51 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 15:26:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( void ) : ClapTrap ()
{
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout << "(FragTrap) Default constructor called" << std::endl;
}

FragTrap::FragTrap ( std::string name ) : ClapTrap (name)
{
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout << "(FragTrap) String constructor called" << std::endl;
}

FragTrap::FragTrap ( ClapTrap & copy) : ClapTrap (copy)
{
    std::cout << "(FragTrap) Copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator = ( FragTrap & op )
{
	this->ClapTrap::operator = (op);
	return (*this);
}

void FragTrap::attack ( std::string const & target )
{
	std::cout << "FragTrap:: ";
	this->ClapTrap::attack(target);
}
void FragTrap::takeDamage ( unsigned int amount )
{
	std::cout << "FragTrap:: ";
	this->ClapTrap::takeDamage(amount);
}
void FragTrap::beRepaired ( unsigned int amount )
{
	std::cout << "FragTrap:: ";
	this->ClapTrap::beRepaired(amount);
}

void FragTrap::highFivesGuys ( void )
{
    std::cout << " == highFivesGuys == " << std::endl;
}

FragTrap::~FragTrap ( void )
{
    std::cout << "(FragTrap) Destructor called" << std::endl;
}
