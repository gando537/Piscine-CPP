/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:27:19 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/27 13:20:08 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__HPP__
#define __PHONEBOOK__HPP__

#include <iostream>
#include <iomanip>
#include <cstring>

typedef struct phonebk
{
	int			index;
	char		first_name[256];
	char		last_name[256];
	char		nickname[256];
	char		phone_number[256];
	char		darkest_secret[256];
}t_phonebk;

class phonebook
{
	private:

		int			_index;
		char		_first_name[256];
		char		_last_name[256];
		char		_nickname[256];
		char		_phone_number[256];
		char		_darkest_secret[256];

	public:

		phonebook (void);
		static int		compteur;
		void 			add_contact(char *f_n, char *l_n, 
						char *n_n, char *p_n, char *d_s, int i);
		void			add_value(int i, t_phonebk &_phbk);
		void			affiche_repertoire();
		void			affiche_coordonnee() const;
		void			printer(char *str, int k);

		~phonebook (void);
};

#endif
