/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:24:34 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/20 17:20:10 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main ( void ) 
{
    int a = 2;
    int b = 3;

    std::cout << "Values before swap : ";
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "Values after swap : " ;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << " \n============================================\n " << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "Values before swap : " ;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(c, d);
    std::cout << "Values after swap : " ;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << " \n============================================\n " << std::endl;

    ClassTemplate <int> cl1(21) ;
    ClassTemplate <int> cl2(42) ;

    std::cout << "Values before swap : ";
    std::cout << "cl1 = " << cl1 << ", b = " << cl2 << std::endl;
    ::swap( cl1, cl2 );
    std::cout << "Values after swap : ";
    std::cout << "cl1 = " << cl1 << ", b = " << cl2 << std::endl;
    std::cout << "min( cl1, cl2 ) = " << ::min( cl1, cl2 ) << std::endl;
    std::cout << "max( cl1, cl2 ) = " << ::max( cl1, cl2 ) << std::endl;

    std::cout << " \n============================================\n " << std::endl;

    ClassTemplate <std::string> cl3("chaine1") ;
    ClassTemplate <std::string> cl4("chaine2") ;
    std::cout << "Values before swap : ";
    std::cout << "cl3 = " << cl3 << ", cl4 = " << cl4 << std::endl;
    ::swap(cl3, cl4);
    std::cout << "Values after swap : ";
    std::cout << "cl3 = " << cl3 << ", cl4 = " << cl4 << std::endl;
    std::cout << "min( cl3, cl4 ) = " << ::min( cl3, cl4 ) << std::endl;
    std::cout << "max( cl3, cl4 ) = " << ::max( cl3, cl4 ) << std::endl;

    return 0;
}
