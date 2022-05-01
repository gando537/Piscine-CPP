/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:27:19 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/27 14:12:39 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__HPP__
#define __PHONEBOOK__HPP__

#include <iostream>
#include <iomanip>
#include <cstring>

class phonebook
{
	public:

		phonebook (void);

		int			index ;
		char		first_name[256] ;
		char		last_name[256] ;
		char		nickname[256] ;
		char		phone_number[256] ;
		char		darkest_secret[256] ;

		static int	compteur;
		void		check_number (void) ;
		void 		add_contact (void) ;
		void		affiche_repertoire () ;
		void		affiche_coordonnee () const ;
		void		printer (char *str, int k) ;

		~phonebook (void);
};

#endif
