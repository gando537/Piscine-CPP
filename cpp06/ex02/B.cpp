/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:35:11 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 14:45:41 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B ( std::string const & type) : _type(type)
{}

std::string & B::getType ()
{
    return (this->_type) ;
}

B::~B () {}
