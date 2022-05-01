/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:03:15 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/02 15:20:27 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN__H__
#define __KAREN__H__

#include <iostream>

class Karen
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public :
        void complain( std::string level );
};

#endif
