/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:06:41 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/05 15:30:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void ) :
    _name(nullptr),
    _Hitpoints(10),
    _Energy_points(10),
    _Attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ) :
    _name(name),
    _Hitpoints(10),
    _Energy_points(10),
    _Attack_damage(0)
{
    std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap ( ClapTrap & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap & ClapTrap::operator = ( ClapTrap & op )
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &op)
        return (*this);
    this->_name = op.get_name();
    this->_Hitpoints = op.get_Hitpoints();
    this->_Energy_points = op.get_Energy_points();
    this->_Attack_damage = op.get_Attack_damage();
    return (*this);
}

void ClapTrap::attack ( std::string const & target )
{
    std::cout << "ClapTrap " << this->get_name() << " attack " << target << " causing " << this->get_Attack_damage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage ( unsigned int amount )
{
    std::cout << "ClapTrap " << this->get_name() << " take " << amount << " damage ! " << std::endl;
    this->_Hitpoints -= amount ;
    if (this->_Hitpoints <= 0)
        this->_Hitpoints = 0;
}

void ClapTrap::beRepaired ( unsigned int amount )
{
    std::cout << "ClapTrap " << this->get_name() << " be repaired " << amount << " hit points ! " << std::endl;
    this->_Hitpoints += amount ;
}

std::string ClapTrap::get_name ( void )
{
    return (this->_name);
}

int ClapTrap::get_Hitpoints ( void )
{
    return (this->_Hitpoints);
}

int ClapTrap::get_Energy_points ( void )
{
    return (this->_Energy_points);
}

int ClapTrap::get_Attack_damage ( void )
{
    return (this->_Attack_damage);
}

ClapTrap::~ClapTrap ( void )
{}
