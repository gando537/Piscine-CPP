/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:33:19 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/30 17:08:31 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void )
{
}

void Zombie::setName ( std::string const & name )
{
	this->_name = name;
}

void Zombie::announce ( void )
{
	std::cout << this->_name << " " << "BraiiiiiiinnnzzzZ..." << std::endl ;
}

Zombie::~Zombie ( void )
{
	std::cout << this->_name << " " << "is destroyed" << std::endl ;
}
