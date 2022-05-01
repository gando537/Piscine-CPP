/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 22:36:04 by mdiallo           #+#    #+#             */
/*   Updated: 2022/01/27 17:06:26 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (--argc)
		{
			j = -1;
			i++;
			while (argv[i][++j])
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
				{
					c = argv[i][j] - 32;
					std::cout << c;
				}
				else
					std::cout << argv[i][j];
			}
		}
	}
	std::cout << "\n";
	return(0);
}
