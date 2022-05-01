/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:19:10 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:09:46 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void )
{
    const std::string ideas[] = {
		"🥱",
		"🥵",
		"😢",
		"😱",
		"🥶",
		"🤯",
		"🤩",
		"🥰",
		"🥳",
		"🥴",
		"🤤",
		"🤢",
		"🤧",
		"🤮",
		"🤡",
		"🤠",
		"🤥",
		"🤤",
	};

	std::cout << "Constructor Brain:";
	for (int i = 0; i < 100; ++i)
	{
		this->_ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
		std::cout << " " << this->_ideas[i];
	}
	std::cout << std::endl;
}

Brain::Brain ( Brain const & other )
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = other.getIdea(i);
    std::cout << "Copy Constructor Brain called" << std::endl;
}

Brain & Brain::operator = ( Brain & other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other.getIdea(i);
    }
    return (*this);
}

std::string const & Brain::getIdea(int index) const
{
	return this->_ideas[index];
}

Brain::~Brain ( void )
{
	std::cout << "Destructor Brain:";
	for (int i = 0; i < 100; ++i)
		std::cout << " " << this->_ideas[i];
	std::cout << std::endl;
}
