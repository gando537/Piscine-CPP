/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:08:52 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 13:11:46 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZE_HPP__
#define __SERIALIZE_HPP__

#include <iostream>
#include <string>

typedef struct s_data
{
    std::string name;
    int age;
}Data;

uintptr_t serialize ( Data * ptr ) ;

Data * deserialize ( uintptr_t raw ) ;

#endif
