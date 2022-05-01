/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:01:38 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 13:23:05 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private :

        FragTrap () ;

    public :
    
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
