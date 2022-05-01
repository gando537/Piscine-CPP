/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:13:30 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/31 23:24:06 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON__H__
#define __WEAPON__H__

#include <iostream>
#include <string>
#include <cstring>

class Weapon
{
    private :
        std::string _tp ;

    public :
        Weapon ( );
        Weapon ( std::string tp ) ;
        Weapon ( const Weapon & copy );
        
        std::string & getTypeRef ( void ) ;
        Weapon & operator = (const Weapon& op);
        std::string const & getType () const ;
        void setType ( const std::string & tp ) ;

        ~Weapon ( void ) ;
};

#endif
