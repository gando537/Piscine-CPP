/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:29:21 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 14:36:17 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _A_H_
#define _A_H_

#include "Base.hpp"

class A : public Base
{
    private :
        std::string _type ;
    public :
        A ( std::string const & type) ;
        std::string & getType () ;
        ~A () ;
} ;

#endif
