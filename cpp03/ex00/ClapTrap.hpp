/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:06:45 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/05 15:23:32 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <iostream>
#include <string>

class ClapTrap
{
    private :

        std::string _name ;
        int _Hitpoints ;
        int _Energy_points ;
        int _Attack_damage ;

    public :

        ClapTrap ( void ) ;
        ClapTrap ( std::string name ) ;
        ClapTrap ( ClapTrap & copy);
        
        ClapTrap & operator = ( ClapTrap & op );
        
        void attack ( std::string const & target ) ;
        void takeDamage ( unsigned int amount ) ;
        void beRepaired ( unsigned int amount ) ;

        std::string get_name ( void ) ;
        int get_Hitpoints ( void ) ;
        int get_Energy_points ( void ) ;
        int get_Attack_damage ( void ) ;

        ~ClapTrap ( void );
    
};

#endif
