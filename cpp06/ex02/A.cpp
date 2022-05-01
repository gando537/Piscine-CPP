/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:32:51 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 14:45:51 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A ( std::string const & type) : _type(type)
{}

std::string & A::getType ()
{
    return (this->_type) ;
}

A::~A () {}