/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:59:18 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/22 20:57:43 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_H_
#define _EASYFIND_H_

#include <iostream>
#include <vector>

class vect_limit
{ 
    private :
    public :
        class NotExistException : public std::exception
        {
            virtual const char * what () const throw ()
            {
                return "there is no occurrence";
            }
        };
} ;

template <typename T> typename T::iterator easyfind ( T & contenor, int n)
{
    typename T::iterator it = find(contenor.begin(), contenor.end(), n);
    if (it == contenor.end())
        throw vect_limit::NotExistException() ;
    return (it) ;
}

#endif
