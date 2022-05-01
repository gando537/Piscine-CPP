/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:18:35 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/02 15:26:56 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int main(void)
{
	Karen karen;

	karen.complain("DEBUG");
    std::cout << "\n";
	karen.complain("INFO");
    std::cout << "\n";
	karen.complain("WARNING");
    std::cout << "\n";
	karen.complain("ERROR");
	return (0);
}
