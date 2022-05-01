/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:01:38 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 15:19:40 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    protected :

    public :
    
        FragTrap () ;
        FragTrap ( std::string name ) ;
        FragTrap ( ClapTrap & copy) ;

        FragTrap & operator = ( FragTrap & op ) ;
        
        void attack ( std::string const & target ) ;
        void takeDamage ( unsigned int amount ) ;
        void beRepaired ( unsigned int amount ) ;
        void highFivesGuys ( void ) ;

        ~FragTrap ( void ) ;
};

#endif
