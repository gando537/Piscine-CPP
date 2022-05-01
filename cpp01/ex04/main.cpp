/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:00:00 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/01 19:03:53 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int check_str(int pos, char **av)
{
	char c ;
	int i = 0;
	std::ifstream ifs(av[1]);
	ifs.seekg(pos - 1);
	c = ifs.get() ;
	while (ifs.good() && av[2][i])
	{
		if (c != av[2][i++])
		{
			ifs.close();
			return (0);
		}
		c = ifs.get() ; 
	}
	ifs.close();
	return (1);
}

int main (int ac, char **av)
{
	size_t size;
	int pos;
	char c;
	std::ifstream ifs(av[1]);
	std::ofstream ofs("FILENAME.replace");

	if (ac != 4)
		return (1);
	size = strlen(av[2]);
	c = ifs.get() ; 
	while (ifs.good())
	{
		if (c == av[2][0])
		{
			pos = ifs.tellg();
			if (check_str(pos, av))
			{
				ofs << av[3];
				ifs.seekg(pos + size - 1);
			}
			else
				ofs << c;
		}
		else
			ofs << c;
		c = ifs.get() ; 
	}
	ifs.close();
	ofs.close();
	return (0);
}
