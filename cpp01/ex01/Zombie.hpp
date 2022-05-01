/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:20:48 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/30 17:08:29 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__H__
#define __ZOMBIE__H__

#include <iostream>
#include <string>

class Zombie 
{
    private :
		std::string _name;

	public :
		Zombie ( void );

		void setName ( std::string const & name );
		void announce( void );

		~Zombie ( void );

};

Zombie *ZombieHorde( int N, std::string name );

#endif
