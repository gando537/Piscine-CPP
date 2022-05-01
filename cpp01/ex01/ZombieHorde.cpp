/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:33:38 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/30 17:08:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde( int N, std::string name )
{
	int i;
	Zombie *zmb = new Zombie[(const int) N];

	i = 0;
	while (i < N)
	{
		std::string num_str(std::to_string(i + 1));
		std::string name_zombi = name + num_str;
		zmb[i++].setName(name_zombi);
	}
	return (zmb);
}
