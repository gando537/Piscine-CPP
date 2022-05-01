/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:33:48 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/30 17:12:58 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    int N, i;

    N = 7;
    Zombie *zmb = ZombieHorde(N, "Zombie");

    i = 0;
    while (i < N)
		zmb[i++].announce () ;
    
	delete [] zmb;

    return (0);
}
