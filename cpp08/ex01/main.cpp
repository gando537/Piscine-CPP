/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:07:40 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/24 13:49:24 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



int main() 
{
    {
        Span sp = Span(5);
        try
        {
            sp.addNumber(6);
            sp.getlist() ;
            std::cout << std::endl;
            sp.addNumber(3);
            sp.getlist() ;
            std::cout << std::endl;
            sp.addNumber(17);
            sp.getlist() ;
            std::cout << std::endl;
            sp.addNumber(9);
            sp.getlist() ;
            std::cout << std::endl;
            sp.addNumber(11);
            sp.getlist() ;
            std::cout << std::endl;

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            sp.addNumber(42);
            sp.getlist() ;
            std::cout << std::endl;
        }
        catch(const std::exception & e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        Span sp = Span(5);
        try
        {
            sp.addNumber(42);
            sp.getlist() ;
            std::cout << std::endl;
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    {
        Span sp(10000);
		for (int i = 0; i < 10000; i++)
			sp.addNumber(i + 1);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
    }

    return 0; 
}
