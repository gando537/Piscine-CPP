/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:06:49 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 13:31:04 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap Gan2("Gan2");

	Gan2.attack("Somthing!");
	Gan2.takeDamage(100);
	Gan2.beRepaired(3);
	Gan2.highFivesGuys();

	return (0);
}
