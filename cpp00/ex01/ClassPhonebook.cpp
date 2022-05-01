/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:31:09 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/27 13:21:25 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void) {}

phonebook::~phonebook(void) {}

void phonebook::add_contact(char *f_n, char *l_n, char *n_n,
						char *p_n, char *d_s, int i)
{
	if (compteur < 8) 
	{
		strcpy(_first_name,f_n);
		strcpy(_last_name,l_n);
		strcpy(_nickname,n_n);
		strcpy(_phone_number, p_n);
		strcpy(_darkest_secret,d_s);
		_index = i;
		compteur++;
	}
	else
		std::cout << "\tRépertoire plein, ajout impossible\n";
}

int	phonebook::compteur = 0;

void	affiche_contact(phonebook 	pb[8])
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

void	check_number(t_phonebk &phbk)
{
	int	i;

	while (1)
	{
		std::cout << "Saisir numero valide :" << std::endl;
		std::cout << "\t[ADD] > ";
		std::cin.getline(phbk.phone_number, 256);
		i = 0;
		while (1)
		{
			if (phbk.phone_number[i] < '0' || phbk.phone_number[i] > '9')
				break;
			i++;
			if (phbk.phone_number[i] == '\0')
				return;
		}
	}
}

void	phonebook::add_value(int i, t_phonebk &phbk)
{
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "Saisir nom :" << std::endl;
	std::cout << "\t[ADD] > ";
	std::cin.getline(phbk.first_name, 255);
	std::cout << "Saisir Prénom :" << std::endl;
	std::cout << "\t[ADD] > ";
	std::cin.getline(phbk.last_name, 255);
	std::cout << "Saisir nickname :" << std::endl;
	std::cout << "\t[ADD] > ";
	std::cin.getline(phbk.nickname, 255);
	std::cout << "Saisir darkest secret :" << std::endl;
	std::cout << "\t[ADD] > ";
	std::cin.getline(phbk.darkest_secret, 255);
	check_number(phbk);
	phonebook::add_contact(phbk.first_name, phbk.last_name,
	phbk.nickname,phbk.phone_number, phbk.darkest_secret, i);
}

void phonebook::affiche_coordonnee() const
{
	std::cout << std::endl;
	std::cout << "[Index] ==> " << _index << std::endl;
	std::cout << "[_first_name] ==> " << _first_name << std::endl;
	std::cout << "[_last_name] ==> " << _last_name << std::endl;
	std::cout << "[_phone_number] ==> " << _phone_number << std::endl;
	std::cout << "[_nickname] ==> " << _nickname << std::endl;
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
	std::cout << "\n" << std::setw(9) << " " << _index << "|";
	phonebook::printer(_first_name, 1);
	phonebook::printer(_last_name, 1);
	phonebook::printer(_nickname, 0);
}

int main()
{
	int			i;
	char		input[10];
	t_phonebk 	phbk;
	phonebook 	pb[8];

	while (1)
	{
		std::cout << std::endl;
		std::cout << "[input] > ";
		std::cin >> input;
		if (!strcmp(input, "ADD"))
			pb[phonebook::compteur].add_value(phonebook::compteur, phbk);
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