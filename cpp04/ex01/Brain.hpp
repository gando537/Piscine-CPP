/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:07:21 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:00:53 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <iostream>
#include <string>

class Brain
{
    private :

        std::string _ideas [100];

    public :

        Brain ( void ) ;
        Brain ( Brain const & other ) ;

        Brain & operator = ( Brain & other) ;
        std::string const & getIdea(int index) const ;

        ~Brain ( void ) ;
};

#endif
