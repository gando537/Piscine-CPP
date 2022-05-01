/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:06:49 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 15:44:38 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Gan2("Gan2");

	Gan2.attack("Somthing!");
	Gan2.FragTrap::takeDamage(100);
	Gan2.ScavTrap::beRepaired(3);
	Gan2.highFivesGuys();
	Gan2.guardGate();
	Gan2.whoAmI();

	return (0);
}
