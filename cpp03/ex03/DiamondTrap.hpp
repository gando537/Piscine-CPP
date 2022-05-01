/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:39:54 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/06 15:18:50 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :

        std::string _name ;

    public :

        DiamondTrap ( void ) ;
        DiamondTrap ( std::string const &name ) ;
        DiamondTrap ( DiamondTrap const & copy ) ;

        DiamondTrap & operator = ( DiamondTrap const &op ) ;

        void attack ( std::string const &target ) ;

        void whoAmI ( void ) ;

        ~DiamondTrap ( void );
    
};

#endif
