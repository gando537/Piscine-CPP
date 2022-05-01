/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:06:49 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 13:31:25 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Gan2("Gan2");

	Gan2.attack("Somting!");
	Gan2.takeDamage(100);
	Gan2.beRepaired(3);
	Gan2.guardGate();
	
	return (0);
}
