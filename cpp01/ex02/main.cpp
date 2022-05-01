/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:33:48 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/30 18:09:59 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Adresse en mémoire de la chaîne             : " << &str << std::endl;
    std::cout << "Adresse en mémoire de la chaîne (stringPTR) : " << stringPTR << std::endl;
    std::cout << "Adresse en mémoire de la chaîne (stringREF) : " << &stringREF << std::endl;
    std::cout << "------------\n";
    std::cout << "Adresse en mémoire de la chaîne (stringPTR) : " << *stringPTR << std::endl;
    std::cout << "Adresse en mémoire de la chaîne (stringREF) : " << stringREF << std::endl;

    return (0);
}
