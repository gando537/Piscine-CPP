/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:32:44 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/19 16:02:52 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.cpp"

int main()
{
    srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
        
		Base * p = generate();
        std::cout << "ptr ==> " ;
        identify(p) ;
        Base & r = *p ;
        std::cout << "ref ==> " ;
        identify(r) ;
        std::cout << "\n" << std::endl;
	}
    return (0);
}
