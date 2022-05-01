/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:00:44 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/27 17:03:10 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	affiche_contact(phonebook pb[8])
{
	char	index;
	int		i;

	while (1)
	{
		std::cout << "Saisir index valide :" << std::endl;
		std::cout << "\t[Index] > ";
		std::cin >> index;
		if (index >= '0' && index < (phonebook::compteur + '0'))
			break;
		std::cout << "\nIndex invalide!!!\n" << std::endl;
		std::cin.ignore(INT_MAX, '\n');
	}
	i = index - '0';
	pb[i].affiche_coordonnee();
}

int main()
{
	int			i;
	char		input[10];
	phonebook 	pb[8];

	while (1)
	{
		std::cout << std::endl;
		std::cout << "[input] > ";
		std::cin >> input;
		if (!strcmp(input, "ADD"))
			pb[phonebook::compteur].add_contact();
		else if (!strcmp(input, "SEARCH"))
		{
			i = -1;
			while (++i < phonebook::compteur)
				pb[i].affiche_repertoire();
			std::cout << "\n";
			if (phonebook::compteur)
				affiche_contact(pb);
		}
		else if (!strcmp(input, "EXIT"))
			exit(EXIT_SUCCESS);
		else
			std::cout << "\nInput incorrect!!!\n";
	}
	return (0);
}
