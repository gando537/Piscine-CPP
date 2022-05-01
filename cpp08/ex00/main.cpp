/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:39:21 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/23 19:10:56 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void print_vec ( int value )
{
    std::cout << "[ " << value <<  " ] " ;
}

int main ()
{
    int t[6] = { 2, 9, 1, 8, 2, 11 } ;
    std::vector<int> vec(6) ;

    copy(t, t + 6, vec.begin()) ;
    for_each ( vec.begin(), vec.end(), print_vec) ;
    std::cout << std::endl;

    try
	{
		std::cout << "[ " << *easyfind(vec, 1) << " ]" << std::endl;
		std::cout << "[ " << *easyfind(vec, 42) << " ]" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << " ]" << std::endl;
	}

    return (0);
}
