/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:01:38 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 15:19:09 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    protected :

    public :
    
        ScavTrap () ;
        ScavTrap ( std::string name ) ;
        ScavTrap ( ClapTrap & copy) ;

        ScavTrap & operator = ( ScavTrap & op ) ;
        
        void attack ( std::string const & target ) ;
        void takeDamage ( unsigned int amount ) ;
        void beRepaired ( unsigned int amount ) ;
        void guardGate ( void ) ;

        ~ScavTrap ( void ) ;
};

#endif
