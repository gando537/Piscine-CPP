/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:31:09 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/27 17:02:52 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

phonebook::phonebook(void) {}

phonebook::~phonebook(void) {}

int	phonebook::compteur = 0;

void	phonebook::check_number(void)
{
	int	i;

	while (1)
	{
		std::cout << "Saisir numero valide :" << std::endl;
		std::cout << "\t[ADD] > ";
		std::cin.getline(this->phone_number, 256);
		i = 0;
		while (1)
		{
			if (this->phone_number[i] < '0' || this->phone_number[i] > '9')
				break;
			i++;
			if (this->phone_number[i] == '\0')
				return;
		}
	}
}

void	phonebook::add_contact()
{
	if (phonebook::compteur < 8)
	{
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "Saisir nom :" << std::endl;
		std::cout << "\t[ADD] > ";
		std::cin.getline(this->first_name, 255);
		std::cout << "Saisir Prénom :" << std::endl;
		std::cout << "\t[ADD] > ";
		std::cin.getline(this->last_name, 255);
		std::cout << "Saisir nickname :" << std::endl;
		std::cout << "\t[ADD] > ";
		std::cin.getline(this->nickname, 255);
		std::cout << "Saisir darkest secret :" << std::endl;
		std::cout << "\t[ADD] > ";
		std::cin.getline(this->darkest_secret, 255);
		check_number();
		this->index = phonebook::compteur;
		phonebook::compteur++;
	}
	else
		std::cout << "\tRépertoire plein, ajout impossible\n";
}

void phonebook::affiche_coordonnee() const
{
	std::cout << std::endl;
	std::cout << "[Index] ==> " << this->index << std::endl;
	std::cout << "[_first_name] ==> " << this->first_name << std::endl;
	std::cout << "[_last_name] ==> " << this->last_name << std::endl;
	std::cout << "[_phone_number] ==> " << this->phone_number << std::endl;
	std::cout << "[_nickname] ==> " << this->nickname << std::endl;
}

void phonebook::printer(char *str, int k)
{
	int		i;
	size_t	len;

	len = strlen(str);
	if (len <= 10)
	{
		std::cout << std::setw(10 - len) << " ";
		if (k)
			std::cout << str << "|";
		else
			std::cout << str << "\n";
	}
	else
	{
		i = 0;
		while (i < 9)
			std::cout << str[i++];
		if (k)
			std::cout << ".|";
		else
			std::cout << str << ".\n";
	}
}

void phonebook::affiche_repertoire()
{
	std::cout << "\n" << std::setw(9) << " " << this->index << "|";
	phonebook::printer(this->first_name, 1);
	phonebook::printer(this->last_name, 1);
	phonebook::printer(this->nickname, 0);
}
