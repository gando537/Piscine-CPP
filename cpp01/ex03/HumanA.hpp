/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:13:04 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/31 23:40:41 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__H__
#define __HUMANA__H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private :
        std::string     _name ;
        Weapon          &_wp;

    public :
        HumanA ( std::string name, Weapon &wp ) ;
        HumanA (const HumanA & copy);
        HumanA & operator=(const HumanA& op);
        
        void attack () ;

        ~HumanA ( void ) ;
};

#endif
