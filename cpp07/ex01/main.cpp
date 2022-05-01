/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:50:38 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/20 19:48:59 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_str(std::string & str)
{
    std::cout << str << std::endl ;
}

int main ( void )
{
    std::string str[] = {"Lamine", "Gan2", "Abasse", "Fatim", "Bora", "Diaraye"} ;
    
    iter(str, sizeof(str) / sizeof(std::string), print_str) ;

    std::cout << "\n============================================\n" << std::endl ;

    ClassTemplate <int> tab[10] ;

    for (int i = 0; i < 10; i++)
        tab[i].setValue(i) ;

    iter(tab, sizeof(tab) / sizeof(int), print_class) ;

    std::cout << "\n============================================\n" << std::endl ;

    ClassTemplate <std::string> t[6] ;

    for (int i = 0; i < 6; i++)
        t[i].setValue(str[i]) ;

    iter(t, sizeof(t) / sizeof(std::string), print_class) ;

    return (0) ;
}
