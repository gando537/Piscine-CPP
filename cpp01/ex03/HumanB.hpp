/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:13:11 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/31 23:58:51 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__H__
#define __HUMANB__H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private :
        std::string _name ;
        Weapon          *_wp;

    public :
        HumanB ( void ) ;
        HumanB ( const std::string & name ) ;
        HumanB ( const HumanB & ) ;
        
        HumanB & operator = (const HumanB & op);
        void setWeapon ( Weapon & wp ) ;
        void attack () ;

        ~HumanB ( void ) ;
};

#endif
