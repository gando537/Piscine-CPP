/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:36 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/09 15:55:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
#include "WrongAAnimal.hpp"

int main()
{
	{
		// const AAnimal *meta = new AAnimal();
		AAnimal *AAnimals[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
				AAnimals[i] = new Dog();
			else
				AAnimals[i] = new Cat();
		}
		std::cout << "DEEP COPY!!" << std::endl;
		std::cout << "-----------------------------" << std::endl;
		Dog copy(*(Dog *)AAnimals[4]);
		for (int i = 0; i < 100; ++i)
		{
			std::cout << copy.getBrain()->getIdea(i) << "    ";
			std::cout << ((Dog *)AAnimals[4])->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << "-----------------------------" << std::endl;
		for (int i = 0; i < 10; ++i)
		{
			delete AAnimals[i];
		}
	}
	system("leaks AAnimal");

    return (0);
}
