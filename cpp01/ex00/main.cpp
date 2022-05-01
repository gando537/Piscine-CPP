/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:33:48 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/30 15:02:40 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie *n_z1 = newZombie("Gan1");
    Zombie *n_z2 = newZombie("Gan2");

	n_z1->announce();
	n_z2->announce();

    randomChump("Gand3");
    randomChump("Gand4");

	delete n_z1;
	delete n_z2;

    return (0);
}
