/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:30:02 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 14:36:51 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _B_H_
#define _B_H_

#include "Base.hpp"

class B : public Base
{
    private :
        std::string _type ;
    public :
        B ( std::string const & type) ;
        std::string & getType () ;
        ~B () ;
} ;

#endif
