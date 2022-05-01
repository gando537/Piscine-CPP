/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:30:29 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 14:36:38 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _C_H_
#define _C_H_

#include "Base.hpp"

class C : public Base
{
    private :
        std::string _type ;
    public :
        C ( std::string const & type) ;
        std::string & getType () ;
        ~C () ;
} ;

#endif
