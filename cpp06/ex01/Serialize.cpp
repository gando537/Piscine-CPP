/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:08:34 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 13:14:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize ( Data * ptr )
{
    return (reinterpret_cast<uintptr_t>(ptr)) ;
}

Data * deserialize ( uintptr_t raw )
{
    return (reinterpret_cast<Data *>(raw)) ;
}
