/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdiallo <mdiallo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:02:36 by mdiallo           #+#    #+#             */
/*   Updated: 2022/02/07 17:24:21 by mdiallo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main ()
{
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    const WrongAnimal *wrong = new WrongCat();
    std::cout << "\n================\n" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << "\n================\n" << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();
    wrong->makeSound();
    std::cout << "\n================\n" << std::endl;
    delete meta;
    delete cat;
    delete dog;
    delete wrong;
    
    return (0);
}
